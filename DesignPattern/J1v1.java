class Person{			//  
	private String name ;	//  
	private int age ;		//  
	private Book book ;		//  
	private Person child ;	//  
	public Person(String name,int age){
		this.setName(name) ;
		this.setAge(age) ;
	}
	public void setName(String n){
		name = n ;
	}
	public void setAge(int a){
		age = a ;
	}
	public String getName(){
		return name ;
	}
	public int getAge(){
		return age ;
	}
	public void setBook(Book b){
		book = b ;
	}
	public Book getBook(){
		return book ;
	}
	public void setChild(Person c){
		child = c ;
	}
	public Person getChild(){
		return child ;
	}
};
class Book{				//  
	private String title ;	//  
	private float price ;	//  
	private Person person ;	//  
	public Book(String title,float price){
		this.setTitle(title) ;
		this.setPrice(price) ;
	}
	public void setTitle(String t){
		title = t ;
	}
	public void setPrice(float p){
		price = p ;
	}
	public String getTitle(){
		return title ;
	}
	public float getPrice(){
		return price ;
	}
	public void setPerson(Person p){
		person = p ;
	}
	public Person getPerson(){
		return person ;
	}
};
public class J1v1{
	public static void main(String arg[]){
		Person per = new Person("ZHANGSAN",30) ;
		Person cld = new Person("ZHANGSI",10) ;	//  
		Book bk = new Book("JAVA SE Programming",90.0f) ;
		Book b = new Book("One Thousands Nighs",30.3f) ;
		per.setBook(bk) ;		//  
		bk.setPerson(per) ;		//  
		cld.setBook(b) ;		//  
		b.setPerson(cld) ;		//  
		per.setChild(cld) ;		//  
		System.out.println("Person to Book --> name: " + per.getName()+ ": age: " 
			+ per.getAge() +": book: " + per.getBook().getTitle() + ": price: " 
			+ per.getBook().getPrice()) ;	// 
		System.out.println("Book to Person --> Book: " + bk.getTitle() + ": price: "
			+ bk.getPrice() + ": Book: " + bk.getPerson().getName() + ": age: "
			+ bk.getPerson().getAge()) ;	// 
		// 
		System.out.println(per.getName() + "'s chird is: ' --> name: "
			+ per.getChild().getName() + ": age: " + per.getChild().getAge()
			+ ": Book: " + per.getChild().getBook().getTitle() + ": price: "
			+ per.getChild().getBook().getPrice()) ;
	}
};