/**
 * Operations on linked list make Iterative function call.
 */
class Link{
    class Node{
        private String data;
        private Node next;
        public Node(String data){
            this.data = data;
        }
        public void add(Node newNode){
            if(this.next == null){
                this.next = newNode;
            }
            else{
                this.next.add(newNode);
            }
        }
        public void print(){
            System.out.print(this.data + "\t");
            if(this.next != null){
                this.next.print();
            }
        }
        public boolean search(String data){
            if(data.equals(this.data)) return true;
            else {
                if(this.next == null) return false;
                return this.next.search(data);
            }
        }
        public void delete(Node pre, String data){
            if(data.equals(this.data)) pre.next = this.next;
            else{
                if(this.next != null) this.next.delete(this, data);
            }
        }
    };
    private Node root;
    public void addNode(String data){
        if(this.root == null) this.root = new Node(data);
        else{
            this.root.add(new Node(data));
        }
    }
    public void printNodes(){
        if(this.root != null) this.root.print();
    }
    public boolean contains(String data){
        return this.root.search(data);
    }
    public void deleteNode(String data){
        if(this.contains(data)) {
            if(this.root.data.equals(data)) this.root = this.root.next;
            else this.root.next.delete(root, data);
        }
    }
};

public class JlinkedList{
    public static void main(String args[]){
        Link ll = new Link();
        ll.addNode("aa");
        ll.addNode("bb");
        ll.addNode("cc");
        ll.addNode("dd");
        ll.addNode("ee");
        System.out.println("Before delete nodes print:");
        ll.printNodes();

        ll.deleteNode("cc");
        ll.deleteNode("aa");

        System.out.println("\nAfter delete nodes print:");
        ll.printNodes();
        
        System.out.println("\nFound Node bb: " + ll.contains("bb"));
        
    }
}