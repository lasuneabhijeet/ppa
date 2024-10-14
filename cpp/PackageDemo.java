import Marvellous.Circle;
import Marvellous.Infosystem.Squre;
class PackageDemo
{
    public static void main(String A[])
    {
        Circle cobj = new Circle();
        float Ans = 0.0f;

        Ans = cobj.CircleArea(10.5f);

        System.out.println("Area of Circle is :"+Ans);

        Squre sobj = new Squre();
        Ans = sobj.SqueArea(10.5f);

        System.out.println("Area of square is :"+Ans);

    }
}
//javac packageDemo.java