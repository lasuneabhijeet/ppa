import java.io.*;

class ExceptionDemo7
{
    public static void main(String A[])throws IOException
    {
    
        BufferedReader dobj = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter your name :");
        String name = dobj.readLine();
        System.out.println("Enter your age :");
        int Age = Integer.parseInt(dobj.readLine());

        System.out.println("your name :"+name);
        System.out.println("your age :"+Age);
             

        
        

    }
}