class MainProgram2
{
    public static void Main(string[] args)
    {
        string ageString = "25";
        string priceString = "99.99";

        // Parsing string to int
        int age = int.Parse(ageString);

        // Parsing string to double
        double price = double.Parse(priceString);

        // Display
        Console.WriteLine("Parsed Age: " + age);
        Console.WriteLine("Parsed Price: " + price);

        // Input string
        string fullName = "John Doe";

        // Split name
        string[] parts = fullName.Split(' ');
        Console.WriteLine("First Name: " + parts[0]);
        Console.WriteLine("Last Name: " + parts[1]);
    }
}
