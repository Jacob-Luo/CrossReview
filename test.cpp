#include <iostream>
#include <memory>
#include <thread>
#include <chrono>
#include <mutex>

using namespace std;

struct Base
{
    Base() {  cout << "  Base::Base()\n"; }
    // Note: non-virtual destructor is OK here
    ~Base() {  cout << "  Base::~Base()\n"; }
};
 
struct Derived: public Base
{
    Derived() {  cout << "  Derived::Derived()\n"; }
    ~Derived() {  cout << "  Derived::~Derived()\n"; }
};
 
void thr( shared_ptr<Base> p)
{
     _sleep(10);
     shared_ptr<Base> lp = p; // thread-safe, even though the
                                  // shared use_count is incremented
    {
        static mutex io_mutex;
         lock_guard< mutex> lk(io_mutex);
         cout << "local pointer in a thread:\n"
                  << "  lp.get() = " << lp.get()
                  << ", lp.use_count() = " << lp.use_count() << '\n';
    }
}
 
int main()
{
     shared_ptr<Base> p =  make_shared<Derived>();
 
     cout << "Created a shared Derived (as a pointer to Base)\n"
              << "  p.get() = " << p.get()
              << ", p.use_count() = " << p.use_count() << '\n';
     thread t1(thr, p), t2(thr, p), t3(thr, p);
    p.reset(); // release ownership from main
     cout << "Shared ownership between 3 threads and released\n"
              << "ownership from main:\n"
              << "  p.get() = " << p.get()
              << ", p.use_count() = " << p.use_count() << '\n';
    t1.join(); t2.join(); t3.join();
     cout << "All threads completed, the last one deleted Derived\n";
}
