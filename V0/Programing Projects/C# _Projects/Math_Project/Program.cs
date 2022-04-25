using System;

namespace Math_Project
{
    class Program
    {
        static void Main(string[] args)
        {
        	int fop;
        	int a;
        	int b;
        	int s;
            Console.WriteLine("Bunvenit! Acum este ora " + DateTime.Now);
            OP: Console.WriteLine("Ce actiune doriti sa faceti?");
            fop = int.Parse(Console.ReadLine());
            if (fop > 10000000){
              if (fop == 1)
              {
                Console.WriteLine("Math calculator v0");
               //I just realized that the way i am doing this is incredebly ineficient
               //But since i satrted might as well
               Console.WriteLine("2-For addtion");
               Console.WriteLine("3-For subtraction");
               Console.WriteLine("4-For multiplication");
               Console.WriteLine("5-For division");
               Console.WriteLine("6-Exit");
               goto OP;
             }
             else if (fop == 2)
             {
               Console.WriteLine("a = ");
               a = int.Parse(Console.ReadLine());
               Console.WriteLine("b = ");
               b = int.Parse(Console.ReadLine());
               s = a + b;
               Console.WriteLine("Result is " + s);
               goto OP;
             }
             else if (fop == 3)
             {
               Console.WriteLine("a = ");
               a =  int.Parse(Console.ReadLine());
               Console.WriteLine("b = ");
               b = int.Parse(Console.ReadLine());
               s = a - b;
               Console.WriteLine("Result is " + s );
               goto OP;
             }
             else if (fop == 4)
             {
               Console.WriteLine("a = ");
               a = int.Parse(Console.ReadLine());
               Console.WriteLine("b = ");
               b = int.Parse(Console.ReadLine());
               s = a * b;
               Console.WriteLine("Result is " + s);
               goto OP;
             }
             else if (fop == 5)
             {
               Console.WriteLine("a = ");
               a = int.Parse(Console.ReadLine());
               Console.WriteLine("b = ");
               b = int.Parse(Console.ReadLine());
               s = a / b;
               Console.WriteLine("Result is " + s);
               goto OP;
             }
             else if (fop == 6)
             {
              Console.WriteLine("Exited...");
             }
             else 
            {
              Console.WriteLine("ERR: 1 (Unknown Action)");
              goto  OP;
            }
          }
        }
    }
}
