//Avelino Martinez Rodriguez


using System;

class Ejercicio
{
    static void Main()
    {
        string text;
        //to know if the text have and a
        int havea=1;

        Console.Write("Enter a text: ");
        text = Console.ReadLine();

        while(havea!=0)
        {
            foreach (char letra in text)
            {
                if (letra == 'a' || letra == 'A')
                    havea = 0;
            }
            if (havea != 0)
            {
                Console.Write("Enter a text: ");
                text = Console.ReadLine();
            }
        }
       
    }
}
