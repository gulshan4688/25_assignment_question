class MainProgram11
{
    public static void Main(string[] args)
    {
        int a = 10, b = 5;
        Console.WriteLine("Initial values: a = " + a + ", b = " + b);

        // Arithmetic
        Console.WriteLine("Addition: " + (a + b));
        Console.WriteLine("Subtraction: " + (a - b));
        Console.WriteLine("Multiplication: " + (a * b));
        Console.WriteLine("Division: " + (a / b));
        Console.WriteLine("Modulus: " + (a % b));

        // Assignment
        a += 3; Console.WriteLine("After a += 3: " + a);
        b *= 2; Console.WriteLine("After b *= 2: " + b);

        // Comparison
        Console.WriteLine("a == b: " + (a == b));
        Console.WriteLine("a != b: " + (a != b));
        Console.WriteLine("a > b: " + (a > b));
        Console.WriteLine("a <= b: " + (a <= b));

        // Logical
        bool x = true, y = false;
        Console.WriteLine("x && y: " + (x && y));
        Console.WriteLine("x || y: " + (x || y));
        Console.WriteLine("!x: " + (!x));
    }
}
