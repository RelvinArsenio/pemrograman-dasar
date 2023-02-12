#include <iostream>
#include <conio.h>
using namespace std;
struct data_barang{
   char namaBarang[20];
   int jumlahBarang;
   float hargaBarang;
   };
data_barang batas[150];
int a,b,c,d,total;
float e;

void inputbarang()
{
   
   cout <<"\nJumlah Barang yang akan dibeli : ";
   cin >> b;
   d = 0;
   for(c=0;c<b;c++)
   {
      d=d+1;
      cout << "\nData ke-"<<d<<endl;
      cout << "Nama Barang\t        : ";
      cin >> batas[a].namaBarang;
      cout << "Harga Barang\t        : ";
      cin >> batas[a].hargaBarang;
      cout << "Jumlah Barang dibeli\t: ";
      cin >> batas[a].jumlahBarang;
      e = batas[a].hargaBarang * batas[a].jumlahBarang;
      cout << "Total Harga yang dibeli adalah : " << e;
      total += batas[a].hargaBarang * batas[a].jumlahBarang; 
      a++;
      
   }
   system("cls");
}
void lihatbarang()
{
   int i,j;
   cout << "\n==============================================TOKO TOPSHOP 2=============================================\n\n";
   cout << "==========================================================================================================\n";
   cout << "||\tNO\t||\tNama Barang\t||\tHarga Barang\t\t||\tJumlah Barang dibeli\t||\n";
   j=0;
   for(i=0;i<a;i++)
   {
      j=j+1;
   cout << "==========================================================================================================\n";
      cout <<"||\t"<<j<<"\t||";
      cout << "\t" << batas[i].namaBarang<<"\t\t||";
      cout << "\t" << batas[i].hargaBarang<<"\t\t\t||";
      cout << "\t" << batas[i].jumlahBarang<<"\t\t\t||";cout<<endl;

   }
   cout << "==========================================================================================================\n";
   getch();
   system("cls");
}
void hapusbarang()
{
   int x,y;
   cout<<"Hapus data barang ke-";cin>>x;
   y=x-1;
   a--;
   for(int i=y;i<a;i++)
   {
      batas[i]=batas[i+1];
   }
   system ("cls");
   cout << "\n\n\n\n\n\n\n\n\n+++++++++++++++++++++++++ Data ke-"<<x<<" Terhapus+++++++++++++++";
   getch();
   system("cls");
}
void editdatabarang()
{
   int k,l;
   cout<<"Masukan No barang yang akan di edit : ";cin>>k;
   l=k-1;
   cout <<"Nama Barang\t: ";cin>>batas[l].namaBarang;
   cout <<"Harga Barang\t: ";cin>>batas[l].hargaBarang;
   cout <<"Jumlah Barang\t: ";cin>>batas[l].jumlahBarang;
   lihatbarang();
}
void totalbelanja(){
   int t,u;
   float tunai,kembali;
   
   cout << "\n==============================================TOKO TOPSHOP 2=============================================\n\n";
   cout << "==========================================================================================================\n";
   cout << "||\tNO\t||\tNama Barang\t||\tHarga Barang\t\t||\tJumlah Barang dibeli\t||\n";
   u=0;
   for(t=0;t<a;t++)
   {
      u=u+1;

   cout << "==========================================================================================================\n";
      cout <<"||\t"<<u<<"\t||";
      cout << "\t" << batas[t].namaBarang<<"\t\t||";
      cout << "\t" << batas[t].hargaBarang<<"\t\t\t||";
      cout << "\t" << batas[t].jumlahBarang<<"\t\t\t||";cout<<endl;
      
      

   }
   cout << "==========================================================================================================\n";
   
   cout << "Total belanja Barang anda adalah : " << total << endl;
   cout << "Masuk kan jumlah uang tunai : "; 
   cin >> tunai;
   kembali = tunai - total;
   cout << "==========================================================================================================\n";
   cout << "Kembalian anda adalah : " << kembali << endl;
   cout << "Terimakasih sudah berbelanja di topshop";

   getch();
   system("cls");

}
int main()
{
   system("color a");
   int pilih;
   char w;
   cout << "\n\n\n\n\n ===============================PROGRAM STRUKTUR DATA===============================";
   cout << "\n\n\n\n\n\n\n\n\n\t\t\t PROGRAM CREATE BY DEWANGGA\n\n";
   cout << "\t\t\t TOKO TOPSHOP 2 \n\n\n";
   cout << "\t\t\t PRESS ENTER TO CONTINUE";
   getch();
   system("cls");

awal:
   cout << "\n==============================PILIHAN MENU TOPSHOP 2==============================";
   cout << "\n1. Masukkan Data Barang yang dibeli";
   cout << "\n2. Lihat Data Barang";
   cout << "\n3. Hapus Data Barang";
   cout << "\n4. Edit Data Barang";
   cout << "\n5. Total Belanja";
   cout << "\n6. Keluar Program";
   cout << "\n==================================================================================";
   cout << "\n\nMasukan Pilihan: ";
   cin>>pilih;

   if(pilih==1)
      {system ("cls");inputbarang();goto awal;}
   if(pilih==2)
      {system ("cls");lihatbarang();goto awal;}
   if(pilih==3)
      {system ("cls");hapusbarang();goto awal;}
   if(pilih==4)
      {system ("cls");editdatabarang();goto awal;}
   if(pilih==5)
      {system ("cls");totalbelanja();goto awal;}
   if(pilih==6)
      {system ("cls");
      cout <<"\n\n\n\n\n\n\n\n APAKAH YAKIN KELUAR DARI PROGRAM INI??\n\n";
      cout << "                 [Y]                  [N]              \n"<<endl;
      cout <<"                       ";cin>>w;
      if(w=='y'||w=='Y')
      {
            system("cls");
            cout << "\n\n\n\n\n*************************PROGRAM SELESAI*******************";}
            if(w=='n'||w=='N')
            {system("cls");goto awal;}}
            else
            {
               system("cls");
            cout <<"Pilihan 1-5";
            getch();
            system("cls");
            goto awal;
            }
            cout << "\n\n\n\n\n\n\n\n\n\t\t\t PROGRAM, CREATE BY DEWANGGA\n\n ";
            cout << "\n\n\n\n\n*****************************TERIMAKASIH**************************";
            cout << "\n\n";
}
         
