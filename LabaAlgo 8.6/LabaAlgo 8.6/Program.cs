using System; 
using System.Collections.Generic; 
using System.Linq; 
using System.Text; 
using System.Threading.Tasks; 
using System.Threading; using System.IO; 
using System.Diagnostics;

namespace LabaAlgo_8._6
{

    class Program
    {

        static void Bubble(int[] mass)
        {
            Stopwatch time = new Stopwatch();
            int temp;
            long count = 0;
            time.Start();

            //алгоритм
            for (int i = 0; i < mass.Length - 1; i++)
            {
                for (int j = 0; j < mass.Length - i - 1; j++)
                {
                    if (mass[j] > mass[j + 1])
                    {
                        // меняем элементы местами
                        temp = mass[j];
                        mass[j] = mass[j + 1];
                        mass[j + 1] = temp;
                    }
                    count++;
                }
            }
            time.Stop();
            Console.WriteLine("Сортировка пузырьком: ");
            Console.WriteLine("Количество итераций - {0}", count);
            Console.WriteLine("Затраченное время - {0}\n", time.Elapsed);

        }
        static void Select(int[] mass)
        {
            Stopwatch time = new Stopwatch();
            int temp;
            long count = 0;
            time.Start();
            for (int i = 0; i < mass.Length - 1; i++)
            {
                /* устанавливаем начальное значение минимального индекса */
                int mini = i;
                /* находим индекс минимального элемента */
                for (int j = i + 1; j < mass.Length; j++)
                {
                    if (mass[j] < mass[mini])
                    {
                        mini = j;
                        count++;
                    }
                }
                /* меняем значения местами */
                temp = mass[i];
                mass[i] = mass[mini];
                mass[mini] = temp;
            }
            time.Stop();
            Console.WriteLine("Сортировка выбором: ");
            Console.WriteLine("Количество итераций - {0}", count);
            Console.WriteLine("Затраченное время - {0}\n", time.Elapsed);
        }
        static void Insertion(int[] mass)
        {
            Stopwatch time = new Stopwatch();
            int temp;
            long count = 0;
            time.Start();
            for (int i = 1; i < mass.Length; i++)
            {
                temp = mass[i];
                for (int j = i - 1; j >= 0; j--)
                {
                    if (mass[j] < temp)
                        break;

                    mass[j + 1] = mass[j];
                    mass[j] = temp;
                    count++;
                }
            }
            time.Stop();
            Console.WriteLine("Сортировка вставками: ");
            Console.WriteLine("Количество итераций - {0}", count);
            Console.WriteLine("Затраченное время - {0}\n", time.Elapsed);
        }
        static void Gnom(int[] mass)
        {
            Stopwatch time = new Stopwatch();
            int temp;
            long count = 0;
            int i = 0, j = 2;
            time.Start();
            while (i < mass.Length)
            {
                if (i == 0 || mass[i - 1] <= mass[i])
                {
                    i = j;
                    j++;
                }
                else
                {
                    temp = mass[i];
                    mass[i] = mass[i - 1];
                    mass[--i] = temp;
                    i--;
                }
                count++;
            }
            time.Stop();
            Console.WriteLine("Сортировка Гномья: ");
            Console.WriteLine("Количество итераций - {0}", count);
            Console.WriteLine("Затраченное время - {0}\n", time.Elapsed);
        }
        static void Quick(int[] mass, int l, int r, ref long count)
        {
            int i = l;
            int j = r;
            int x = mass[(l + r) / 2];
            while (i <= j)
            {
                while (mass[i] < x)
                {
                    count++; i++;
                }
                while (mass[j] > x)
                {
                    j--;
                    count++;
                }
                if (i <= j)
                {
                    count++;
                    int temp = mass[i];
                    mass[i] = mass[j];
                    mass[j] = temp;
                    i++;
                    j--;
                }
            }
            if (l < j)
                Quick(mass, l, j, ref count);
            if (i < r)
                Quick(mass, i, r, ref count);
        }
        static void Main(string[] args)
        {
            Random rand = new Random();
            int N, i;
            int[] mass;
            int[] mass_1;
            Console.Write("Введите кол-во элементов массива: ");
            N = int.Parse(Console.ReadLine());
            Console.WriteLine();
            mass = new int[N];
            mass_1 = new int[N];
            Console.WriteLine("Введите элементы массива:");
            for (i = 0; i < N; i++)
            {
                Console.WriteLine("mass[" + i + "] = ");
                mass_1[i] = int.Parse(Console.ReadLine());
            }
            for (i = 0; i < N; i++)
                mass[i] = mass_1[i];
            Bubble(mass);
            for (i = 0; i < N; i++)
                mass[i] = mass_1[i];
            Select(mass);
            for (i = 0; i < N; i++)
                mass[i] = mass_1[i];
            Insertion(mass);
            for (i = 0; i < N; i++)
                mass[i] = mass_1[i];
            Gnom(mass);
            for (i = 0; i < N; i++)
                mass[i] = mass_1[i];
            Stopwatch time = new Stopwatch();
            long itcount = 0;
            time.Start();
            Quick(mass, 0, N - 1, ref itcount);
            time.Stop();
            Console.WriteLine("Быстрая сортировка:");
            Console.WriteLine("Количество итераций - {0}", itcount);
            Console.WriteLine("Затраченное время - {0}\n", time.Elapsed); time.Reset();

        }
    }


}
