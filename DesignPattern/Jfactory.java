//Get instances from a factory class instead of directly instanciation.
interface Fruit{
    public void eat();
}

class Apple implements Fruit{
    public void eat(){
        System.out.println("I am eating an Apple.");
    }
}

class Orange implements Fruit{
    public void eat(){
        System.out.println("Oranges.");
    }
}

class Factory{
    public static Fruit getInstanceFruit(String className){
        Fruit f=null;
        if("apple".equals(className)){
            f= new Apple();
        }
        if("orange".equals(className)){
            f = new Orange();
        }
        return f;
    }
}

public class Jfactory{
    public static void main(String args[]){
        Fruit f = Factory.getInstanceFruit("apple");
        if(f!=null) f.eat();
    }
}




