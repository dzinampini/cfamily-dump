using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Mufemberi_weAge
{
    
    class Program
    {


        static void Main(string[] args)
        {
            try
            {
            begin:
                Console.WriteLine("Welcome to Mufemberi weAge \n Enter the last digit of your phone number to continue");
                int step1 = int.Parse(Console.ReadLine());
                int step2 = step1 * 2;
                int step3 = step2 + 5;
                int step4 = step3 * 50;
                int step5 = step4 + 1764;

                Console.WriteLine("Enter your Birth year, eg 1994");


                int step6 = int.Parse(Console.ReadLine());
                int step7 = step5 - step6;

                Console.WriteLine(step7);
                Console.WriteLine("Now you 3 numbers right, \n the first number is the last digit of your phone number, \n the last 2 digits represent your age");
                Console.WriteLine("isu tofembera vakuru mufanami");
                Console.ReadLine();



            decide:

                Console.WriteLine("To try again press T, to quit press Q");
                string decision = Console.ReadLine();

                switch (decision)
                {
                    case "T":
                    case "t":
                        goto begin;

                    case "Q":
                    case "q":
                        Console.WriteLine("kana wakangamwa age yako unodzoka tokuudza");
                        Console.ReadLine();
                        break;

                    default:
                        Console.WriteLine("Invalid input, press enter to continue");
                        Console.ReadLine();
                        goto decide;
                }

            }
            catch (Exception ex)
            {
                Console.WriteLine(ex);
                Console.ReadLine();

            }

            finally
            {
                try
                {
                begin:
                    Console.WriteLine("Welcome to Mufemberi weAge \n Enter the last digit of your phone number to continue");
                    int step1 = int.Parse(Console.ReadLine());
                    int step2 = step1 * 2;
                    int step3 = step2 + 5;
                    int step4 = step3 * 50;
                    int step5 = step4 + 1764;

                    Console.WriteLine("Enter your Birth year, eg 1994");


                    int step6 = int.Parse(Console.ReadLine());
                    int step7 = step5 - step6;

                    Console.WriteLine(step7);
                    Console.WriteLine("Now you 3 numbers right, \n the first number is the last digit of your phone number, \n the last 2 digits represent your age");
                    Console.WriteLine("isu tofembera vakuru mufanami");
                    Console.ReadLine();



                decide:

                    Console.WriteLine("To try again press T, to quit press Q");
                    string decision = Console.ReadLine();

                    switch (decision)
                    {
                        case "T":
                        case "t":
                            goto begin;

                        case "Q":
                        case "q":
                            Console.WriteLine("kana wakangamwa age yako unodzoka tokuudza");
                            Console.ReadLine();
                            break;

                        default:
                            Console.WriteLine("Invalid input, press enter to continue");
                            Console.ReadLine();
                            goto decide;
                    }

                }
                catch (Exception ex)
                {
                    Console.WriteLine(ex);
                    Console.ReadLine();

                }

            }

        
        }
    }
}
