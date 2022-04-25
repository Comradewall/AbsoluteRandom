Imports System
Module mainModule
    Sub Main()
        Dim a As Integer
        Dim b As Integer
        Dim sum As Integer
        Dim valo As Integer
        Console.WriteLine("Bunvenit in VB calculator v0.1")
        Console.WriteLine("+=1")
        Console.WriteLine("-=2")
        Console.WriteLine("*=3")
        Console.WriteLine("/=4")
        Console.WriteLine("Ce operator vreti sa folositi?")
        valo = Console.ReadLine()
        Console.WriteLine("a=")
        a = Console.ReadLine()
        Console.WriteLine("b=")
        b = Console.ReadLine()
        If valo = 1 Then
            sum = a + b
            Console.WriteLine("Sum ={0}", sum)
        End If
        If valo = 2 Then
            sum = a - b
            Console.WriteLine("Sum ={0}", sum)
        End If
        If valo = 3 Then
            sum = a * b
            Console.WriteLine("Sum ={0}", sum)
        End If
        If valo = 4 Then
            sum = a / b
            Console.WriteLine("Sum ={0}", sum)
        End If
    End Sub
End Module
