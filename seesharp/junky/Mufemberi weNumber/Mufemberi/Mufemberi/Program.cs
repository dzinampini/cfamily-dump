using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Mufemberi
{
    class Program
    {
        static void Main(string[] args)
        {
            string myInput;
            int myInt;


            Console.WriteLine("Tinokugamuchira kumutambo waunosangana neMufemberi Mukuru! \n Dzvanya bhatani raunoda upfurire mberi kumutambo");
            Console.ReadLine();


        begin:

            Console.WriteLine("Dzvanya number yaunoda kubva pana 0 kusvika 9, wobaya ZVAITA (ENTER)");

        try
        {

            myInt = int.Parse(Console.ReadLine());
            switch (myInt)
            {
                case 0:
                    Console.WriteLine("wabaya 0 inhema here?");
                    break;

                case 1:
                    Console.WriteLine("wabaya 1 inhema here?");
                    break;

                case 2:
                    Console.WriteLine("wabaya 2 inhema here?");
                    break;

                case 3:
                    Console.WriteLine("wabaya 3 inhema here?");
                    break;

                case 4:
                    Console.WriteLine("wabaya 4 inhema here?");
                    break;

                case 5:
                    Console.WriteLine("wabaya 5 inhema here?");
                    break;

                case 6:
                    Console.WriteLine("wabaya 6 inhema here?");
                    break;

                case 7:
                    Console.WriteLine("wabaya 7 inhema here?");
                    break;

                case 8:
                    Console.WriteLine("wabaya 8 inhema here?");
                    break;

                case 9:
                    Console.WriteLine("wabaya 9 inhema here?");
                    break;

                default:
                    Console.WriteLine("number yawabaya ine mwana inhema here?, chitsotsi tobata");
                    break;
            }
        }
        catch
        {
            Console.WriteLine("Dofo! ndati baya manumber kubva pana 0 kusvika 9 mhani");
        }


        decide:
            Console.WriteLine("isu tofembera vakuru \n kuti utange kutamba futi baya S \n kuti ubvise mutambo uyu baya Q ");

        myInput = Console.ReadLine();

            switch (myInput)
            {
                case "s":
                case "S":
                    goto begin;

                case "Q":
                case "q":
                    Console.WriteLine("tinotenda nekubvuma kushandiswa kwawaitwa nemutambo wedu \n sekererawo zve aaaaaaaaah \n wotsvakawo wako wekushandisa");
                    Console.ReadLine();
                    break;

                default:
                    Console.Write("zidofo tati baya \n S kuti utambe kana kuti \n Q kuti ubvise mutambo");
                    Console.ReadLine();
                    goto decide;

            }

      

        }
    }
}
