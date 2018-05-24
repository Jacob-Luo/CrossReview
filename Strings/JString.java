/** Some String methods in this peice of code. */

public class JString{
    public static void main(String args[]){
        String s = "  I am providing the code some experiments data...\n\n  ";
        //1, Converts this string to a new character array.
        char[] cc = s.toCharArray();
        for(char c:cc){
            System.out.print("-" + c); 
        }

        //2, Returns the char value at the specified index.
        System.out.print("chatAt[10] is: " + s.charAt(10)); 

        //3, get bytes from the string and rebuild string based part/whole bytes.
        byte[] bb = s.getBytes();
        System.out.print("\n\nGet Bytes from the String: ");        
        for(byte b : bb) {
            System.out.print(" " + b);            
        }
        System.out.print("\n\nRebuild the whole string from bytes: "+
                            new String(bb));
        System.out.print("Rebuild part of the string from bytes: " +
                            new String(bb,3,10));
        
        //4, get length.
        System.out.print("\n\nString length is: "+ s.length());        

        //5, Returns the index within this string of the first occurrence of the specified substring.
        System.out.print("\n\nFind the first 'ex' on index:"+
                            s.indexOf("ex"));

        //6, Returns a string whose value is this string, with any leading and trailing whitespace removed.
        System.out.print("\n\nRemoved leading/trailing whitespaces: **"+ s.trim());

        //7, Get substring
        System.out.print("\n\nExtracting substring(10,20): "+ s.substring(10,20));

        //8,Splits this string around matches of the given regular expression.   
        System.out.print("\n\nSplits string on whitespace: ");
        String[] ss = s.split("\\W");
        for(String sss:ss){
            System.out.print("**"+sss);
        }
        
        //9,To uppercase and lowercase.
        System.out.print("\n\nTo UPPERCASE: " +s.toUpperCase());
        System.out.print("To lowercase: " +s.toLowerCase());        
        
        //startswith and endswith, equalsIgnoreCase. 
        //replaseall
        System.out.print("Replase all whitespace: " + s.replaceAll("\\W", "##"));      

    }
}