using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using ClassLibrary3;

namespace WpfApp1
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();

            WrapperClass _wr = new WrapperClass();
            //int res = wrapper.MemCopy(90);
            //Console.WriteLine(res + " zzzzzzzzzzzzzzzzzzz ");

            int[] a = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            int[] b = new int[10];
            MessageBox.Show("trc：b[0]=" + b[0].ToString() + ", b[5]=" + b[5].ToString() + ", b[10]=" + b[9].ToString());
            _wr.MemCopy(a, b, 10); //処理実行（C#のインテリセンスも働きます）
            MessageBox.Show("sau：b[0]=" + b[0].ToString() + ", b[5]=" + b[5].ToString() + ", b[10]=" + b[9].ToString());
            Environment.Exit(0);
        }
    }
}
