class MainProgram4
{
    public static void Main(string[] args)
    {
        string message = "  Welcome to C# programming!  ";

        Console.WriteLine("Original: '" + message + "'");

        // Trim
        Console.WriteLine("Trimmed: '" + message.Trim() + "'");

        // ToUpper and ToLower
        Console.WriteLine("Upper: " + message.ToUpper());
        Console.WriteLine("Lower: " + message.ToLower());

        // Contains
        Console.WriteLine("Contains 'C#': " + message.Contains("C#"));

        // Replace
        string newMsg = message.Replace("C#", "CSharp");
        Console.WriteLine("Replaced: " + newMsg);

        // Substring
        string sub = message.Substring(10, 2);
        Console.WriteLine("Substring(10, 2): " + sub);
    }
}
