using System;
using System.IO;
using System.Collections.Generic;

namespace С_03
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            Check();
            Console.ReadLine();
        }

        private static StreamReader Input()
        {
            return new StreamReader(@"C:\Users\Iryna\Documents\Visual Studio 2013\Projects\ConsoleApplication1\q1.txt");
        }

        private static void Output(Dictionary<string, int> map)
        {
            int maxNumber = 0;
            foreach (var p in map)
            {
                if (p.Value > maxNumber)
                {
                    maxNumber = p.Value;
                }
            }
            foreach (var p in map)
            {
                if (maxNumber == p.Value)
                {
                    Console.WriteLine(p.Key + "\nValue: " + p.Value);
                }
            }
        }


        private static void Check()
        {
            using (StreamReader sr = Input())
            {
                string line;
                var map = new Dictionary<string, int>();

                while ((line = sr.ReadLine()) != null)
                {
                    string all = "";
                    all += line + " ";
                    string[] split = line.Split(' ');
                    int counterSimpleNumber = 0;
                    foreach (var number in split)
                    {
                        int convert = Convert.ToInt32(number);
                        int counter = 0;
                        for (int i = 1; i < convert + 1; i++)
                        {
                            if (convert % i == 0)
                            {
                                counter++;
                            }
                        }
                        if (counter <= 2)
                        {
                            counterSimpleNumber++;
                        }
                    }
                    map.Add(all, counterSimpleNumber);
                }
                Output(map);
            }
        }
    }
}
