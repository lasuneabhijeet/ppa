class Base
{
    public int A,B;

    public Base()
    {
        System.out.println("Inside Base Constructor");
    }
    public void Fun()
    {
        System.out.println("Inside Base Fun");
    }
}
class Derived extends Base
{
    public int x,y;
    public Derived()
        {
            System.out.println("Inside Derived Constructor");
        }
    public void GUN()
    {
        System.out.println("Inside Derived Gun");
    }

}
class Derivedx extends Derived
{
    public int  p,Q;

    public Derivedx()
        {
            System.out.println("Inside Derived Constructor");
        }
    public void SUN()
    {
        System.out.println("Inside Derived Gun");
    }

}


class Multilevel
{
    public static void main(String A[])
    {
        System.out.println("Inside main method");
        Derivedx dobj = new Derivedx();

        dobj.Fun();
        dobj.GUN();
        dobj.SUN();
        
    }
}