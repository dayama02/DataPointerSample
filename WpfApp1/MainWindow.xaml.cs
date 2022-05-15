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
using TwinCAT.Ads;

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

            var timer = new System.Timers.Timer();

            timer.Interval = 500;
            timer.Elapsed += Timer_Elapsed;

            timer.Start();
        }

        private void Timer_Elapsed(object sender, System.Timers.ElapsedEventArgs e)
        {
            using(var client = new TcAdsClient())
            {
                client.Connect(AmsNetId.Local, 350);

                var valueHandle = client.CreateVariableHandle("Untitled1_Obj1 (Module1).Outputs.Value");
                var untitled1Obj1DataHandle = client.CreateVariableHandle("Untitled1_Obj1 (Module1).Outputs.Data");
                var untitled2Obj1DataHandle = client.CreateVariableHandle("Untitled2_Obj1 (Module1).Outputs.Data");
                var dataProviderValueHandle = client.CreateVariableHandle("DataProvider_Obj1 (Module1).DataArea1.Value");


                Dispatcher.Invoke(() =>
                {
                    Untitled1Obj1DataTextBox.Text = client.ReadAny(untitled1Obj1DataHandle, typeof(UInt32)).ToString();
                    Untitled2Obj1DataTextBox.Text = client.ReadAny(untitled2Obj1DataHandle, typeof(UInt32)).ToString();
                    DataProviderDataTextBox.Text = client.ReadAny(dataProviderValueHandle, typeof(UInt32)).ToString();
                });
            }
        }

        private void SetValueButton_Click(object sender, RoutedEventArgs e)
        {
            using (var client = new TcAdsClient())
            {
                var writeValue = Convert.ToUInt32(DataProviderValueTextBox.Text);

                client.Connect(AmsNetId.Local, 350);

                var valueHandle = client.CreateVariableHandle("DataProvider_Obj1 (Module1).DataArea1.Value");
                client.WriteAny(valueHandle, writeValue);

            }
        }
    }
}
