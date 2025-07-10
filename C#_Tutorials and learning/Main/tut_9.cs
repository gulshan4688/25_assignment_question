class MainProgram123
{
    public static void Main(string[] args)
    {
        int num1 = 4;
        int num2 = 6;
        Console.WriteLine("Addition: " + Add(num1, num2));
        Console.WriteLine("Multiplication: " + Multiply(num1, num2));
        Console.WriteLine("Factorial of 5: " + Factorial(5));
    }

    public static int Add(int a, int b)
    {
        Console.WriteLine($"Adding {a} + {b}");
        return a + b;
    }

    public static int Multiply(int a, int b)
    {
        Console.WriteLine($"Multiplying {a} * {b}");
        return a * b;
    }

    public static int Factorial(int n)
    {
        int result = 1;
        for (int i = 2; i <= n; i++)
        {
            result *= i;
            Console.WriteLine($"Intermediate factorial value: {result}");
        }
        return result;
    }
}
