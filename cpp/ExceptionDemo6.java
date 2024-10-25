import java.util.Scanner;
class AgeInvalidException extends Exception
{
    public AgeInvalidException(String str)
    {
        super(str);
        System.out.println("Inside Constructor");
    }

}
class ExceptionDemo6
{
    public static void main(String A[])
    {
        int Age = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter your Age");
        Age = sobj.nextInt();
        try{
            System.out.println("Inside Try");
            if(Age<18)
            {
             AgeInvalidException aobj   =new AgeInvalidException("_______________________");
             throw aobj;
            }
        }
        catch(AgeInvalidException obj)
        {
            System.out.println("Inside catch");
            System.out.println(obj);

        }
        finally{
            System.out.println("Inside finally");
        }
        System.out.println("End of Application");
        

    }
}