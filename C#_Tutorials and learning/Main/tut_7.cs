class MainProgram
{
    public static void Main(string[] args)
    {
        string? role = null;

        Console.Write("Enter your role (Admin/User/Guest): ");
        role = Console.ReadLine();

        if (role == null)
        {
            Console.WriteLine("You entered nothing.");
        }
        else if (role.ToLower() == "admin")
        {
            Console.WriteLine("You have full access.");
        }
        else if (role.ToLower() == "user")
        {
            Console.WriteLine("You have limited access.");
        }
        else
        {
            Console.WriteLine("You are a guest.");
        }

        switch (role?.ToLower())
        {
            case "admin":
                Console.WriteLine("Switch: Admin Panel Enabled.");
                break;
            case "user":
                Console.WriteLine("Switch: User Dashboard Loaded.");
                break;
            default:
                Console.WriteLine("Switch: Welcome Guest!");
                break;
        }
    }
}
