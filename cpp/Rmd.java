class Base
{
    public int A,B;
    public void Fun()
    {
        System.out.println("Inside Base Fun");
    }
    public void Gun()
    {
        System.out.println("Inside Base Gun");
    }
    public void Sun()
    {
        System.out.println("Inside Base Sun");
    }
    public void Run()
    {
        System.out.println("Inside Base Run");
    }
}
class Derived extends Base
{
    public int x,y;
   
    public void Fun()
    {
        System.out.println("Inside Derived Fun");
    }
    public void sun()
    {
        System.out.println("Inside Derived sun");
    }
     public void Mun()
    {
        System.out.println("Inside Derived Mun");
    }
    public void Bun()
    {
        System.out.println("Inside Derived Bun");
    }

}


class Rmd
{
    public static void main(String A[])
    {
        Base bobj = new Derived();
        bobj.Fun();   //Deried Fun
        bobj.Gun();    //Base Gun
        bobj.Sun();   //Derived Sun
        bobj.Run();// Base Run
       // bobj.Mun();//error
        //bobj.Bun();//error

        
    }
}