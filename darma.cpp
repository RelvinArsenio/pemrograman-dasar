#include <iostream>
#include <conio.h>
#include <string>
#include <limits>
using namespace std;

int menu;

struct datauser
{
    string namauser[52];
    int64_t nikuser[52];
    string prodi[52];
    int64_t uanguser[52];
    string terbilanguser[52];
    string keperluanuser[52];
    int64_t tglbayaruser[52];
    string blnbayaruser[52];
    int64_t thnbayaruser[52];
    
    int jumlah;
};
datauser userdata;
    void hapusdata(int a){

                userdata.namauser[a]="";
                userdata.nikuser[a]=0;
                userdata.prodi[a]="";
                userdata.uanguser[a]=0;
                userdata.terbilanguser[a]="";
                userdata.keperluanuser[a]="";
                userdata.tglbayaruser[a]=0;
                userdata.blnbayaruser[a]="";
                userdata.thnbayaruser[a]=0;
                
        }

    void sortulangdata(){
        for(int a;a<= userdata.jumlah;a++){
            
            if(userdata.namauser[a] == ""){
               userdata.namauser[a]      = userdata.namauser[a+1] ;
               userdata.nikuser[a]       = userdata.nikuser[a+1];
               userdata.prodi[a]         = userdata.prodi[a+1];
               userdata.uanguser[a]      = userdata.uanguser[a+1];
               userdata.terbilanguser[a] = userdata.terbilanguser[a+1];
               userdata.keperluanuser[a] = userdata.keperluanuser[a+1];
               userdata.tglbayaruser[a]  = userdata.tglbayaruser[a+1];
               userdata.blnbayaruser[a]  = userdata.blnbayaruser[a+1];
               userdata.thnbayaruser[a]  = userdata.thnbayaruser[a+1];

            hapusdata(a+1);
            }
        }

    }

    void isidata(int a){

        cout<<"silahkan masukan nama : ";
        cin>>userdata.namauser[a];

        cout<<"silahkan masukan nik : ";
        cin>>userdata.nikuser[a];

        cout<<"silahkan masukan prodi : ";
        cin>>userdata.prodi[a];

        cout<<"silahkan masukan uang yang di bayarkan : ";
        cin>>userdata.uanguser[a];

        cout<<"silahkan masukan uang yang terbilang : ";
        cin>>userdata.terbilanguser[a];

        cout<<"silahkan masukan keperluan dari pembayaran : ";
        cin>>userdata.keperluanuser[a];

        cout<<"silahkan masukan tanggal dari pembayaran(hanya tanggal) : ";
        cin>>userdata.tglbayaruser[a];

        cout<<"silahkan masukan bulan dari pembayaran [nama bulan] : ";
        cin>>userdata.blnbayaruser[a];

        cout<<"silahkan masukan tahun dari pembayaran : ";
        cin>>userdata.thnbayaruser[a];
    }

    void tampildata(int c){

          cout<<"["<<c<<"]=========================================================================================================="<<endl;

            cout<<"sudah terima dari :"<<userdata.namauser[c]<<"/"<<userdata.nikuser[c]<<"/"<<userdata.prodi[c];

            cout<<"\nsejumlah uang : RP"<<userdata.uanguser[c];

            cout<<"\nterbilang : " <<userdata.terbilanguser[c];

            cout<<"\nuntuk keperluan : "<<userdata.keperluanuser[c];

            cout<<"\nTelah dibayarkan,tgl : "<<userdata.tglbayaruser[c]<<" "<<userdata.blnbayaruser[c]<<" "<<userdata.thnbayaruser[c]<<endl;
    }

    void input(){  
    bool valid =false;      

    while (valid == false)
    {   
        
        cout<<"jumlah data yang ingin di masukan : ";
        cin>>userdata.jumlah;

        if(cin.fail()){

            cout<<"masukan jumlah data yang benar\n"<<endl;
            valid = false;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

        }else{
            
        for(int a=1;a<=userdata.jumlah;a++){
        cout<<"data ke-"<<a<<"================================================"<<endl;
        isidata(a);        
        }
            valid = true;
        }          
    } ;
        
          

    }

    void display(){
        if(userdata.jumlah > 0){
        cout<<"data dalam database"<<endl;

        for(int c=1;c<=userdata.jumlah;c++){
        
          tampildata(c);

        }
        }else{
            cout<<"tidak ada data dalam database"<<endl;
        }
        getch();

    }

    void updatedata(){
        if(userdata.jumlah > 0){
        int x;
        int up;
        for(int d=1;d<=userdata.jumlah;d++){
            cout<<"data ke -"<<d <<" : "<<userdata.namauser[d]<<endl;
            
            cout<<"----------------------------------------------------------"<<endl;
        }        
        cout<<"data ke berapa yang ingin di update ? "<<endl;
        cin>>x;

        if(userdata.namauser[x] != ""){
            tampildata(x);
            cout<<"========================================================="<<endl;
            cout<<"bagian mana yang ingin di update ?"<<endl;
            cout<<"[nama,nik,prodi,jumlah uang,terbilang uang,keperluan,tanggal bayar,bulan bayar,tahun bayar]"<<endl;
            printf("\nupdate nama ketik 1");
            printf("\nupdate nik ketik 2");
            printf("\nupdate prodi ketik 3");
            printf("\nupdate jumlah uang ketik 4");
            printf("\nupdate terbilang uang ketik 5");
            printf("\nupdate keperluan ketik 6");
            printf("\nupdate tanggal bayar ketik 7");
            printf("\nupdate bulan bayar ketik 8");
            printf("\nupdate tahun bayar ketik 9");
            printf("\ntidak jadi update ketik 11");
            printf("\nupdate semua ketik 22\n");

            cin>>up;
            
            switch (up)
            {
            case 1:
                cout<<"silahkan masukan nama : ";
                cin >>userdata.namauser[x];
                cout<<"=============================================telah di update ===================================================="<<endl;
            break;

            case 2:
                cout<<"silahkan masukan nik : ";
                cin>>userdata.nikuser[x];
                cout<<"=============================================telah di update ===================================================="<<endl;
            break;

            case 3:
                cout<<"silahkan masukan prodi : ";
                cin>>userdata.prodi[x];
                cout<<"=============================================telah di update ===================================================="<<endl;
            break;

            case 4:
                cout<<"silahkan masukan uang yang di bayarkan : ";
                cin>>userdata.uanguser[x];
                cout<<"=============================================telah di update ===================================================="<<endl;
            break;

            case 5:
                cout<<"silahkan masukan uang yang terbilang : ";
                cin>>userdata.terbilanguser[x];
                cout<<"=============================================telah di update ===================================================="<<endl;
            break;

            case 6:
                cout<<"silahkan masukan keperluan dari pembayaran : ";
                cin>>userdata.keperluanuser[x];
                cout<<"=============================================telah di update ===================================================="<<endl;
            break;

            case 7:
                cout<<"silahkan masukan tanggal dari pembayaran : ";
                cin>>userdata.tglbayaruser[x];
                cout<<"=============================================telah di update ===================================================="<<endl;
            break;

            case 8:
                cout<<"silahkan masukan bulan dari pembayaran [nama bulan] : ";
                cin>>userdata.blnbayaruser[x];
                cout<<"=============================================telah di update ===================================================="<<endl;
            break;

            case 9:
                cout<<"silahkan masukan tahun dari pembayaran : ";
                cin>>userdata.thnbayaruser[x];
                cout<<"=============================================telah di update ===================================================="<<endl;
            break;

            case 11:                
                cout<<"=============================================tidak jadi di update ===================================================="<<endl;
            break;

            case 22:
                isidata(x);
            break;
                
            }
            
                
        
        tampildata(x);
        }else{
            cout<<"data ke-"<<x<<" tidak ada"<<endl;
        }

        }
        else{
            cout<<"tidak ada data dalam database"<<endl;
        }
        getch();
    }

    void AddNewdata(){

        int newdata = userdata.jumlah+1;

        cout<<"=====================silahkan masukanlah data baru==================="<<endl;
        isidata(newdata);
        userdata.jumlah += 1;

    }

    void deletedata(){
        if(userdata.jumlah >  0){
        int a;
        string b;
        cout << "pilihlah data ke berapa yang ingin anda delete : "<<endl;

        for(int x=1;x<=userdata.jumlah;x++){
            cout<<"\n========"<<"data ke-"<<x<<"======================================================================"<<endl;
            cout<<userdata.namauser[x]<<endl;
        }

        cin>>a;

        if(userdata.namauser[a] != ""){

        tampildata(a);

        cout<<"=================================================================================="<<endl;


        do
        {
            cout<<"apa anda yakin ingin menghapus data ini ?[y/n]"<<endl;
            cin>>b;

        if(b=="y"){
            hapusdata(a);
            sortulangdata();
            userdata.jumlah -= 1;
            cout<<"================data telah terdelete=================="<<endl;
        }else if(b=="n"){
            cout<<"================data tidak terdelete=================="<<endl;
        }else{
            cout<<"================mohon masukan jawaban yang benar========"<<endl;
        }

        } while (b!="y" && b!="n");
        }else{
            cout <<"data ke-"<<a<<" tidak di temukan"<<endl;
            }
        }
        else{
            cout<<"tidak ada data dalam database"<<endl;
        }
       getch();
        
    }

int main(){
do{
system("cls");

cout << "================================MENU PEMBAYARAN============================="<<endl;
cout << "1.input data baru" <<endl;
cout << "2.tampilkan data" <<endl;
cout << "3.update data" <<endl;
cout << "4.delete data" <<endl;
cout << "5.add data baru" <<endl;
cout << "6.exit" <<endl;
cout << "================================PILIHAN ANDA============================="<<endl;
cout << "pilih[1/2/3/4/5/6]"<<endl;

cin >> menu;

switch (menu)
{
    case 1:
    input();
    break;

    case 2:
    display();
    break;

    case 3:
    updatedata();
    break;

    case 4:
    deletedata();
    break;

    case 5:
    AddNewdata();
    break;
}
}while (menu != 6);



}