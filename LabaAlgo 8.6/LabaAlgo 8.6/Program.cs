using System;

namespace LabaAlgo_8._6
{
    class Program
    {
        static void Main(string[] args)
        {

            /*Алгоритмы сортировка. Реализовать приведенные ниже алгоритмы в одной
программе на следующих массивах данных: 1 тыс., 10 тыс., 100 тыс., 1 млн., 10 млн.
Посчитать количество итераций и затраченное время, вывести эти данные о
производительности и сравнить между собой.
• Сортировка Пузырьком
• Сортировка Выбором
• Сортировка Вставками
• Сортировка Гномья
• Сортировка Быстрая*/

            Console.WriteLine("1 - Сортировка Пузырьком" +
                "2 - Сортировка Выбором" +
                "3 - Сортировка Вставками" +
                "4 - Сортировка Гномья" +
                "5 - Сортировка Быстрая" +
                "Выберите подходящий вариант ");
            int a;
            a = int.Parse(Console.ReadLine());
            switch (a)
            {
                case 1:
                    {

                        int N;
                        Console.WriteLine("Сортировка Пузырьком ");
                        Console.WriteLine("Введите размер массива ");
                        N = int.Parse(Console.ReadLine());
                        int temp;
                        int[] a = new int[N];
                        for (int i = 0; i < N; i++)
                        {
                            Console.WriteLine("arr[" + i + "] = ");
                            a[i] = int.Parse(Console.ReadLine());
                        }
                        for (int i = 0; i < N - 1; i++)
                        {
                            for (int j = 0; j < N - i - 1; j++)
                            {
                                if (a[j] > a[j + 1])
                                {
                                    // меняем элементы местами
                                    temp = a[j];
                                    a[j] = a[j + 1];
                                    a[j + 1] = temp;
                                }
                            }
                        }
                        Console.WriteLine("Отсортированный массив пузырьком");
                        for (int i = 0; i < N; i++)
                        {
                            Console.WriteLine(a[i] + " ");
                        }
                    }
                    break;
                case 2:
                    {
                        int N;
                        Console.WriteLine("Сортировка Выбором ");
                        Console.WriteLine("Введите размер массива ");
                        N = int.Parse(Console.ReadLine());
                        int[] b = new int[N];
                        for (int i = 0; i < N; i++)
                        {
                            Console.WriteLine("arr[" + i + "] = ");
                            b[i] = int.Parse(Console.ReadLine());
                        }
                    }
                    break;
                case 3:
                    {
                        int N;
                        Console.WriteLine("Сортировка Вставками ");
                        Console.WriteLine("Введите размер массива ");
                        N = int.Parse(Console.ReadLine());
                        int temp;
                        int[] a = new int[N];
                        for (int i = 0; i < N; i++)
                        {
                            Console.WriteLine("arr[" + i + "] = ");
                            a[i] = int.Parse(Console.ReadLine());
                        }
                    }
                    break;
                case 4:
                    {
                        int N;
                        Console.WriteLine("Сортировка Гномья ");
                        Console.WriteLine("Введите размер массива ");
                        N = int.Parse(Console.ReadLine());
                        int temp;
                        int[] a = new int[N];
                        for (int i = 0; i < N; i++)
                        {
                            Console.WriteLine("arr[" + i + "] = ");
                            a[i] = int.Parse(Console.ReadLine());
                        }
                    }
                    break;
                case 5:
                    {
                        int N;
                        Console.WriteLine("Сортировка Быстрая ");
                        Console.WriteLine("Введите размер массива ");
                        N = int.Parse(Console.ReadLine());
                        int temp;
                        int[] a = new int[N];
                        for (int i = 0; i < N; i++)
                        {
                            Console.WriteLine("arr[" + i + "] = ");
                            a[i] = int.Parse(Console.ReadLine());
                        }
                    }
                    break;
            }

        }

    }
}
