namespace pizza
{
    public partial class Form1: Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void listBox1_Click(object sender, EventArgs e)
        {
            
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Form newForm = new Form();
            newForm.Show();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            


 int toplamFiyat = 0;


            if(ebatBox1.SelectedItem=="Küçük")
            {
                toplamFiyat += 120;
            }
            else if (ebatBox1.SelectedItem=="Orta")
            {
                toplamFiyat += 150;
            }
            else if(ebatBox1.SelectedItem=="Büyük")
            {
                toplamFiyat += 210;
            }


            if (listBox1.SelectedItem.ToString() == "American Hot") toplamFiyat += 65;
            if (listBox1.SelectedItem.ToString() == "Calypso") toplamFiyat += 45;
            if (listBox1.SelectedItem.ToString() == "Turkish") toplamFiyat += 70;
            if (listBox1.SelectedItem.ToString() == "Pizza Italiano") toplamFiyat += 85;
            if (listBox1.SelectedItem.ToString() == "Etravaganizza") toplamFiyat += 50;













            if (radioButton1.Checked) toplamFiyat += 15;
            if (radioButton2.Checked) toplamFiyat += 30;
            if (danaBox.Checked == true)
            {
                toplamFiyat += 20;

            }
            if(sosisbox.Checked==true)
            {
                toplamFiyat += 15;
            }

            if (misirBox.Checked == true)
            {
                toplamFiyat += 10;
            }
            if (anquezbox.Checked == true)
            {
                toplamFiyat += 15;
            }
            if (zeytinBox.Checked == true)
            {
                toplamFiyat += 10;
            }
            if (sucukbox.Checked == true)
            {
                toplamFiyat += 20;
            }
            if (salambox5.Checked == true)
            {
                toplamFiyat += 10;
            }
            if (mantarbox.Checked == true)
            {
                toplamFiyat += 25;
            }
            if (tonbaliğibox.Checked == true)
            {
                toplamFiyat += 40;
            }
            if (peynirbox.Checked == true)
            {
                toplamFiyat += 15;
            }
            foreach (Control ctrl in this.Controls)
            {
                if(ctrl is CheckBox chk && chk.Checked)
                {
                    toplamFiyat += 10;

                }
                    
            }
            int adet = 1;
            if(! string.IsNullOrEmpty(txtadet.Text))
            {
                int.TryParse(txtadet.Text, out adet);
            }
            toplamFiyat *= adet;

            txttoplam.Text = toplamFiyat.ToString() + "tl";
            









                


        }

        private void txttoplam_TextChanged(object sender, EventArgs e)
        {

        }

        private void btnkapat_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void checkBox11_Click(object sender, EventArgs e)
        {
           
            

            

        }

        private void pizzasec_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            listBox1.Items.Add("American Hot");
            listBox1.Items.Add("Calypso");
            listBox1.Items.Add("Turkish");
            listBox1.Items.Add("Pizza Italiano");
            listBox1.Items.Add("Etravaganizza");
            listBox1.SelectedIndex = 0;
        }

        private void chkorta_Click(object sender, EventArgs e)
        {
            
            



                

        }

        private void chkbuyuk_Click(object sender, EventArgs e)
        {
            
        }

        private void ebatBox1_Click(object sender, EventArgs e)
        {
            ebatBox1.Items.Add("Küçük");
            ebatBox1.Items.Add("Orta");
            ebatBox1.Items.Add("Büyük");
            ebatBox1.SelectedIndex = 0;

            
        }
    }
}
