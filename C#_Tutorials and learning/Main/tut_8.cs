class MainProgram14
{
    public static void Main(string[] args)
    {
        Console.WriteLine("For Loop (1 to 5):");
        for (int i = 1; i <= 5; i++)
            Console.WriteLine("i = " + i);

        Console.WriteLine("\nWhile Loop (count to 3):");
        int j = 1;
        while (j <= 3)
        {
            Console.WriteLine("j = " + j);
            j++;
        }

        Console.WriteLine("\nDo-While Loop (print at least once):");
        int k = 0;
        do
        {
            Console.WriteLine("k = " + k);
            k++;
        } while (k < 1);

        Console.WriteLine("\nBreak and Continue Example:");
        for (int i = 1; i <= 10; i++)
        {
            if (i == 5) continue;
            if (i == 8) break;
            Console.WriteLine("Number: " + i);
        }
    }
}
