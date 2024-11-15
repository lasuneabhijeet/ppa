class ObjectDemo6
{
    public static void main(String A[])
    {
        String s1 = "Marvellous";
        String s2 = new String("Marvellous");

        if(s1 == s2)
        {
            System.out.println("String are equal");
        }
        else
        {
            System.out.println("String Are diffrent");
        }
        if(s1.equal(s2))
        {
            System.out.println("String are equal");
        }else{
            System.out.println("String Are diffrent");
        }
       

    }
}