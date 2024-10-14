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
class Derivedx extends Base
{
    public int  p,Q;

    public Derivedx()
        {
            System.out.println("Inside Derivedx Constructor");
        }
    public void SUN()
    {
        System.out.println("Inside Derivedx Gun");
    }

}


class Hierarchal
{
    public static void main(String A[])
    {
        System.out.println("Inside main method");
        Derived dobj1 = new Derived();

        Derivedx dobj2 = new Derivedx();

        dobj1.Fun();
        dobj1.GUN();

        dobj2.Fun();
        dobj2.SUN();
        
    }
}