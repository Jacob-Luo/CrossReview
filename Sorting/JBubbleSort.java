import java.util.Random;

public class JBubbleSort{
    public static void main(String args[]){
        //Provide data for sorting.
        System.out.print("Original Data: ");        
        Random rand = new Random();
        int data[]= new int[10];
        for(int i=0; i<10; i++){
            data[i] = rand.nextInt(100);
            System.out.print(data[i]+"  ");            
        }
        System.out.println("");

        for(int i=0; i<data.length; i++){
            System.out.print("Sorting Round "+ i+" Data: ");
            for(int j=i; j<data.length; j++){
                if(data[i]>data[j]){
                    int tem= data[i];
                    data[i]=data[j];
                    data[j]=tem;
                }
            }
            //change 'for' to 'foreach'
            for(int k:data){
                System.out.print(k+"  ");                            
            }
            System.out.println(" ");                        
        }
    }
}