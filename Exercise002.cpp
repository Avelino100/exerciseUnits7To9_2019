//Avelino Martinez Rodriguez


using System;

class Ejercicio
{
    static void Main()
    {
        string texto;
        int havea=1;

        Console.Write("Introduzca un tecto: ");
        texto = Console.ReadLine();

        while(havea!=0)
        {
            foreach (char letra in texto)
            {
                if (letra == 'a' || letra == 'A')
                    havea = 0;
            }
            if (havea != 0)
            {
                Console.Write("Introduzca un tecto: ");
                texto = Console.ReadLine();
            }
        }
       
    }
}
