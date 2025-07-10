class MainProgram1
{
    public static void Main(string[] args)
    {
        int num = 10;
        double d = num; // Implicit casting

        Console.WriteLine("Implicitly casted int to double: " + d);

        double d2 = 9.7;
        int i = (int)d2; // Explicit casting

        Console.WriteLine("Explicitly casted double to int: " + i);

        string s = "123";
        int parsedInt;
        bool success = int.TryParse(s, out parsedInt);

        Console.WriteLine("TryParse result: " + success + ", Value: " + parsedInt);
    }
}
