using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Cost_Benefit_Analysis_Calculator
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void General_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter)
            {

                if (this.GetNextControl(ActiveControl, true) != null)
                {
                    e.Handled = true;
                    this.GetNextControl(ActiveControl, true).Focus();
                }
            }
        }


        

        private void buttonCalculate_Click(object sender, EventArgs e)
        {

            try
            {



                double hardcosts1 = double.Parse(hardcost1.Text);
                double hardcosts2 = double.Parse(hardcost2.Text);
                double hardcosts3 = double.Parse(hardcost3.Text);

                double softcosts1 = double.Parse(softcost1.Text);
                double softcosts2 = double.Parse(softcost2.Text);
                double softcosts3 = double.Parse(softcost3.Text);

                double labour1 = double.Parse(labor1.Text);
                double labour2 = double.Parse(labor2.Text);
                double labour3 = double.Parse(labor3.Text);

                double softupg1 = double.Parse(softup1.Text);
                double softupg2 = double.Parse(softup2.Text);
                double softupg3 = double.Parse(softup3.Text);

                double maintt1 = double.Parse(maint1.Text);
                double maintt2 = double.Parse(maint2.Text);
                double maintt3 = double.Parse(maint3.Text);

                double utco1 = double.Parse(utc1.Text);
                double utco2 = double.Parse(utc2.Text);
                double utco3 = double.Parse(utc3.Text);

                double hardopp1 = double.Parse(hardop1.Text);
                double hardopp2 = double.Parse(hardop2.Text);
                double hardopp3 = double.Parse(hardop3.Text);

                double totalcost1 = hardcosts1 + softcosts1 + labour1 + softupg1 + maintt1 + utco1 + hardopp1;
                tc1.Text = totalcost1.ToString();

                double totalcost2 = hardcosts2 + softcosts2 + labour2 + softupg2 + maintt2 + utco2 + hardopp2;
                tc2.Text = totalcost2.ToString();

                double totalcost3 = hardcosts3 + softcosts3 + labour3 + softupg3 + maintt3 + utco3 + hardopp3;
                tc3.Text = totalcost3.ToString();



                double stats1 = double.Parse(stat1.Text);
                double stats2 = double.Parse(stat2.Text);
                double stats3 = double.Parse(stat3.Text);

                double sall1 = double.Parse(sal1.Text);
                double sall2 = double.Parse(sal2.Text);
                double sall3 = double.Parse(sal3.Text);

                double sale1 = double.Parse(sales1.Text);
                double sale2 = double.Parse(sales2.Text);
                double sale3 = double.Parse(sales3.Text);

                double cocs1 = double.Parse(coc1.Text);
                double cocs2 = double.Parse(coc2.Text);
                double cocs3 = double.Parse(coc3.Text);

                double gws1 = double.Parse(gw1.Text);
                double gws2 = double.Parse(gw2.Text);
                double gws3 = double.Parse(gw3.Text);

                double secs1 = double.Parse(sec1.Text);
                double secs2 = double.Parse(sec2.Text);
                double secs3 = double.Parse(sec3.Text);

                double totalben1 = stats1 + sall1 + sale1 + cocs1 + gws1 + secs1;
                tb1.Text = totalben1.ToString();

                double totalben2 = stats2 + sall2 + sale2 + cocs2 + gws2 + secs2;
                tb2.Text = totalben2.ToString();

                double totalben3 = stats3 + sall3 + sale3 + cocs3 + gws3 + secs3;
                tb3.Text = totalben3.ToString();

                double netben1 = totalben1 - totalcost1;

                double netben2 = totalben2 - totalcost2;

                double netben3 = totalben3 - totalcost3;

                nb1.Text = netben1.ToString();
                nb2.Text = netben2.ToString();
                nb3.Text = netben3.ToString();

                double roi11 = (netben1 / totalben1) * 100;

                double roi22 = (netben2 / totalben2) * 100;

                double roi33 = (netben3 / totalben3) * 100;

                roi1.Text = roi11.ToString("#.##") + "%";
                roi2.Text = roi22.ToString("#.##") + "%";
                roi3.Text = roi33.ToString("#.##") + "%";

                //calculating npv now

                //cashflow1 = totalcosts1;
                //value_in_year1 = netben;
                //discounting rate is the the is 0.1(10%)



                double year1 = 1.00D;
                double year2 = 2.00D;
                double year3 = 3.00D;

                double dr = 0.1D;



                //calculating year 1 npv
                double pv1 = netben1 + (1 + dr);

                double denominator1 = Math.Pow(1 + dr, year1);

                double df1 = 1 / denominator1;

                double npvv1 = pv1 * df1;


                //calculating year 2 npv
                double pv2 = netben2 + (1 + dr);

                double denominator2 = Math.Pow(1 + dr, year2);

                double df2 = 1 / denominator2;

                double npvv2 = pv2 * df2;



                //calculating year 3 npv
                double pv3 = netben3 + (1 + dr);

                double denominator3 = Math.Pow(1 + dr, year3);

                double df3 = 1 / denominator3;

                double npvv3 = pv3 * df3;




                double npv = npvv1 + npvv2 + npvv3;




                npv1.Text = "$" + npv.ToString("#.##");
            }
            catch
            {
                MessageBox.Show("Crosscheck your entries for non numeric values");
            }

        }

        private void buttonExit_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            MessageBox.Show("Use the Enter or Tab Key to move to the next textbox quickly");
           
        }

  
    }
}
