class Singleton{
    //The static member can be called outside the class with class name.
    private static Singleton instance = new Singleton() ;	
    
    //Only a static method can call the static member.
	public static Singleton getInstance(){		
		return instance ;
    }
    
    //singleton desing use a private constructor.
	private Singleton(){		
	}
	public void print(){
        System.out.println("Singleton design pattern leverages private constructor attrubutes," 
                        +"the only instance must be instatiated inside the class!!!") ;
	}
};
public class Jsingleton{
	public static void main(String args[]){
		Singleton s1 = null ;	
		Singleton s2 = null ;	
		Singleton s3 = null ;	
		s1 = Singleton.getInstance() ;	
		s2 = Singleton.getInstance() ;	
		s3 = Singleton.getInstance() ;	
		s1.print() ;		
		s2.print() ;		
		s3.print() ;		
	}
};