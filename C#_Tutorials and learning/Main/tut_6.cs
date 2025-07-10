class MainProgram12
{
    public static void Main(string[] args)
    {
        Random rnd = new Random();
        int random1 = rnd.Next(1, 101);
        int random2 = rnd.Next(1, 101);

        Console.WriteLine("Random Number 1: " + random1);
        Console.WriteLine("Random Number 2: " + random2);

        Console.WriteLine("Max: " + Math.Max(random1, random2));
        Console.WriteLine("Min: " + Math.Min(random1, random2));
        Console.WriteLine("Sqrt of first: " + Math.Sqrt(random1));
        Console.WriteLine("Power (1^2): " + Math.Pow(random1, 2));
        Console.WriteLine("Absolute of (r1 - r2): " + Math.Abs(random1 - random2));
    }
}
