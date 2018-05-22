import java.lang.*;

// Lest test a sorting fucntion.
public class test{
    public static int data[] = {7,9,3,2,10,4,99,2,7};
    public static void main(String args[]){
    for(int j=0; j<data.length;j++){      
        for(int i=j; i<data.length; i++){
            int a = data[j];
            int b = data[i];
            if(a>b){
                data[j] = b;
                data[i] = a;
            }
        }
        printData();
    }

    Base b = new Base();
    Derived d = new Derived();
    b.say();
    b = d;
    b.say();
    }
   public static void printData(){
            for(int i = 0; i<data.length; i++){
            System.out.print("data["+i+"] = " + data[i] + "  ");
        }
        System.out.print("\n\n");
   }
};

class Base{
    void say(){
        System.out.println("I am Base.");
    }
};

class Derived extends Base{
    void say(){
        System.out.println("I am Derived.");
    }
}