using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace LabaAlgo_8
{
    class Program
    {
        
        static void Main(string[] args)
        {

            Console.WriteLine("Введите номер задания ");
            int a = Convert.ToInt32(Console.ReadLine());
            switch (a)
            {
                case 1:
                    {
                        /*Решить систему уравнений методом Крамера.*/
                        Console.WriteLine("Введите коэффициенты первого уравнения ");
                        int a1 = int.Parse(Console.ReadLine());
                        int b1 = int.Parse(Console.ReadLine());
                        int c1 = int.Parse(Console.ReadLine());
                        int d1 = int.Parse(Console.ReadLine());
                        Console.WriteLine("Введите коэффициенты второго уравнения ");
                        int a2 = int.Parse(Console.ReadLine());
                        int b2 = int.Parse(Console.ReadLine());
                        int c2 = int.Parse(Console.ReadLine());
                        int d2 = int.Parse(Console.ReadLine());
                        Console.WriteLine("Введите коэффициенты третьего уравнения ");
                        int a3 = int.Parse(Console.ReadLine());
                        int b3 = int.Parse(Console.ReadLine());
                        int c3 = int.Parse(Console.ReadLine());
                        int d3 = int.Parse(Console.ReadLine());

                        float x, y, z, n, n1, n2, n3;
                        n = a1 * b2 * c3 + a2 * b3 * c1 + a3 * b1 * c2 - (a3 * b2 * c1 + a2 * b1 * c3 + a1 * b3 * c2);
                        n1 = d1 * b2 * c3 + d2 * b3 * c1 + d3 * b1 * c2 - (d3 * b2 * c1 + d2 * b1 * c3 + d1 * b3 * c2);
                        n2 = a1 * d2 * c3 + a2 * d3 * c1 + a3 * d1 * c2 - (a3 * d2 * c1 + a2 * d1 * c3 + a1 * d3 * c2);
                        n3 = a1 * b2 * d3 + a2 * b3 * d1 + a3 * b1 * d2 - (a3 * b2 * d1 + a2 * b1 * d3 + a1 * b3 * d2);
                        x = n1 / n;
                        y = n2 / n;
                        z = n3 / n;
                        Console.WriteLine("Корни уравнения равны: " + "х = " + x + " y = " + y + " z = " + z);
                    }
                    break;
                case 2:
                    {
                        /*Разработать программу для вычисления квадратного корня из заданного числа q с
    точностью ε по формуле Ньютона: 𝑥𝑛 = 0,5 (𝑥𝑐 + 𝑞/𝑥𝑐), где xc и xn – соответственно
    старое и новое значения искомого корня на текущем шаге вычислений. На 1-м шаге
    вычислений считать xc = 1. Вычисления закончить при выполнении условия |𝑥𝑛 − 𝑥𝑐| <𝜀. 
    Сравнить значение корня, вычисленное по формуле Ньютона, со значением,
    полученным по формуле x = sqrt(q).
    */

                       double E = 0.0001;
                        float xn, xc = 1, q;
                        Console.WriteLine("Введите число ");
                        q = float.Parse(Console.ReadLine());
                        xn = q;
                        while (Math.Abs(xn - xc) >= E)
                        {
                            xc = xn;
                            xn = (xc + q / xc) / 2;
                        }
                        Console.WriteLine("Корень числа по формуле Ньютона " + xn);
                        Console.WriteLine("Обычный корень числа " + Math.Sqrt(q));
                        Console.WriteLine("Разница между ответами " + Math.Abs(xn - Math.Sqrt(q)));
                    }
                    break;
                case 3:
                    {
                        /*Дано целое число N. Не используя строковые переменные, 
                         вывести в столбик это число.*/
                        int N;
                        int c, i = 0;
                        int[] arr = new int[10];
                        Console.WriteLine("Введите число N ");
                        N = int.Parse(Console.ReadLine());
                        while (N > 0)
                        {
                            c = N % 10;
                            N /= 10;
                            arr[i] = c;
                            i++;
                        }
                        for (int j = i - 1; j >= 0; j--)
                        {
                            Console.WriteLine(arr[j] + " ");
                        }
                    }
                    break;
                case 4:
                    {
                        /*Используя динамический массив, вывести на экран треугольник 
                         Паскаля произвольной длины N<12*/

                        
                        //    //for (i = 0; i < N; i++)
                        //    //{
                        //    //    for (j = 0; j < N - b; j++)
                        //    //    {
                        //    //        arr[i,j] = Rec(i, j);
                        //    //    }

                        //    //}

                        
                        Console.Write("Введите количество строк: ");
                        int N = int.Parse(Console.ReadLine());
                        if (N < 12)
                        {

                            int[][] arr = new int[N][];
                            arr[0] = new int[] { 1 };

                            for (int i = 1; i < arr.Length; i++)
                            {
                                arr[i] = new int[i + 1];
                                for (int j = 0; j <= i; j++)
                                {
                                    if (j == 0 || j == i)
                                        arr[i][j] = 1;
                                    else
                                    {
                                        arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
                                    }
                                }
                            }

                            for (int i = 0; i < arr.Length; i++)
                            {
                                for (int j = 0; j < arr[i].Length; j++)
                                {
                                    Console.Write("{0,-3} ", arr[i][j]);
                                }
                                Console.WriteLine();
                            }
                        }
                        else Console.WriteLine("N превышает условие N<12");
                    }
                    break;
                case 5:
                    {
                        /*Работа с текстовыми файлами. Программа должна уметь:
    • Записывать в текстовый файл информацию, вводимую с клавиатуры
    • Считывать на экран информацию из текстового файла
    • Организовать построчное считывание файла и запись строк задом наперед
    • Найти самую длинную строку в файле. Вывести ее.
    • Перемешать строки в файле случайным образом.*/

                    
                    }
                    break;
                
            }

            int Rec(int n, int k)
            {
                if (n == k)
                    return 1;
                if (k == 1)
                    return n;
                return Rec(n - 1, k - 1) + Rec(n - 1, k);
            }
        }
    }
}
