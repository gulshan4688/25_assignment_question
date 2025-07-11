using System;
using System.Collections.Generic;

delegate int Operation(int x, int y);

class Program
{
    public static void Main(string[] args)
    {
        // Uncomment the section you want to execute

        // RefInOutParams();
        // MethodOverloadAndTernary();
        // ClassesAndConstructors();
        // InheritanceAndStatic();
        // InterfaceAndPolymorphism();
        // DelegatesLambdaException();
        // GenericsAndGenericCollections();
    }

    //  Group 1: ref, in, out, params
    static void RefInOutParams()
    {
        int a = 5;
        int b;
        int c = 3;

        Console.WriteLine("Before ref call: a = " + a);
        ModifyRef(ref a);
        Console.WriteLine("After ref call: a = " + a);

        UseOut(out b);
        Console.WriteLine("Value returned via out: b = " + b);

        UseIn(in c);

        Console.WriteLine("\nUsing Params Array:");
        int sum = AddMultiple(1, 2, 3, 4, 5);
        Console.WriteLine("Sum of all: " + sum);
    }

    static void ModifyRef(ref int x)
    {
        x *= 2;
        Console.WriteLine("Inside ref method: x = " + x);
    }

    static void UseOut(out int y)
    {
        y = 100;
        Console.WriteLine("Inside out method: y = " + y);
    }

    static void UseIn(in int z)
    {
        Console.WriteLine("Inside in method (readonly): z = " + z);
    }

    static int AddMultiple(params int[] numbers)
    {
        int total = 0;
        foreach (int n in numbers)
        {
            Console.WriteLine("Adding: " + n);
            total += n;
        }
        return total;
    }

    static void MethodOverloadAndTernary()
    {
        Console.WriteLine("Add(2, 3): " + Add(2, 3));
        Console.WriteLine("Add(2.5, 3.5): " + Add(2.5, 3.5));
        Console.WriteLine("Add(\"Hello\", \" World\"): " + Add("Hello", " World"));

        int age = 20;
        string result = (age >= 18) ? "Eligible to vote" : "Not eligible";
        Console.WriteLine("Ternary Result: " + result);
    }

    static int Add(int a, int b) => a + b;
    static double Add(double a, double b) => a + b;
    static string Add(string a, string b) => a + b;

    static void ClassesAndConstructors()
    {
        Person p1 = new Person();
        p1.Display();

        Person p2 = new Person("Gulshan", 22);
        p2.Display();
    }

    class Person
    {
        public string Name { get; set; }
        public int Age { get; set; }

        public Person()
        {
            Console.WriteLine("Default Constructor Called.");
            Name = "Unknown";
            Age = 0;
        }

        public Person(string name, int age)
        {
            Console.WriteLine("Overloaded Constructor Called.");
            Name = name;
            Age = age;
        }

        public void Display()
        {
            Console.WriteLine($"Person => Name: {Name}, Age: {Age}");
        }
    }

    static void InheritanceAndStatic()
    {
        Animal a = new Dog();
        a.MakeSound();
        a.Sleep();

        Utility.SayHello();
    }

    abstract class Animal
    {
        public abstract void MakeSound();
        public void Sleep() => Console.WriteLine("Animal is sleeping...");
    }

    class Dog : Animal
    {
        public override void MakeSound()
        {
            Console.WriteLine("Dog barks!");
        }
    }

    static class Utility
    {
        public static void SayHello() => Console.WriteLine("Hello from Utility class!");
    }

    static void InterfaceAndPolymorphism()
    {
        IVehicle vehicle;

        vehicle = new Car();
        vehicle.Start();
        vehicle.Stop();

        vehicle = new Bike();
        vehicle.Start();
        vehicle.Stop();
    }

    interface IVehicle
    {
        void Start();
        void Stop();
    }

    class Car : IVehicle
    {
        public void Start() => Console.WriteLine("Car started.");
        public void Stop() => Console.WriteLine("Car stopped.");
    }

    class Bike : IVehicle
    {
        public void Start() => Console.WriteLine("Bike started.");
        public void Stop() => Console.WriteLine("Bike stopped.");
    }

    static void DelegatesLambdaException()
    {
        Operation add = (a, b) => a + b;
        Operation mul = (a, b) => a * b;

        Console.WriteLine("Add using delegate: " + add(3, 4));
        Console.WriteLine("Mul using delegate: " + mul(3, 4));

        try
        {
            Console.WriteLine("Trying division by zero...");
            int res = 10 / 0;
        }
        catch (DivideByZeroException ex)
        {
            Console.WriteLine("Exception caught: " + ex.Message);
        finally
        {
            Console.WriteLine("Finally block executed.");
        }
    }
    static void GenericsAndGenericCollections()
    {
        Box<int> intBox = new Box<int> { Value = 42 };
        Box<string> strBox = new Box<string> { Value = "Generics in C#" };

        intBox.ShowValue();
        strBox.ShowValue();

        Console.WriteLine("\nGeneric List:");
        List<string> names = new List<string> { "Alice", "Bob", "Charlie" };
        foreach (string name in names)
        {
            Console.WriteLine("Name: " + name);
        }
    }

    class Box<T>
    {
        public T Value { get; set; }
        public void ShowValue()
        {
            Console.WriteLine("Box contains: " + Value);
        }
    }
}
