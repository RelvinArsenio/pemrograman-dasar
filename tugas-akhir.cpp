#include<iostream>
#include<ctime>
#include <iomanip>

using namespace std;

int main(){
	
	// DIBUAT OLEH YOAN DESI PERMATASARI
	
	//Variabel Yang Digunakan :
	int Harga[10],total[50],jumlah_beli,jumbar[100],total_semua,tunai,distal;
	float diskon;
	string Nama_Barang[100]; 
	
	//Daftar Menu
	cout<<" ============================================= "<<endl;
	cout<<" ||       DAFTAR MENU MIXUE ANTASARI        || "<<endl;
	cout<<" ============================================= "<<endl;
    cout<<"  1. IceCreamJasmineBoba\t=  22.000/Pcs  "<<endl;
    cout<<"  2. IceCreamMangoPeach\t\t=  22.000/Pcs  "<<endl;
    cout<<"  3. SundaeOriginal\t\t=  16.000/Pcs  "<<endl;
	cout<<"  4. SundaeBoba\t\t\t=  16.000/Pcs  "<<endl;
	cout<<"  5. SundaeMango\t\t=  16.000/Pcs  "<<endl;
	cout<<"  6. SundaeReadBean\t\t=  16.000/Pcs  "<<endl;
	cout<<"  7. MiShakeBoba\t\t=  16.000/Pcs  "<<endl;
	cout<<"  8. MiShakeMocha\t\t=  16.000/Pcs  "<<endl;
	cout<<" ============================================= "<<endl;
	cout<<endl;

	//banyak jumlah barang yang akan di beli.
	cout<<"  Masukan Jumlah Pembelian :";
    cin>> jumlah_beli;
	cout<<endl; 
    cout<<" ============================================= "<<endl;

    for (int a = 0; a<jumlah_beli ; a++){
        cout<<"\n  Masukan Barang ke- "<<a+1<<"\n\n";
        
        //input nama barang yang dibeli
        cout<<"  Nama Barang\t: ";
        cin>>Nama_Barang[a];
        
        cout<<endl;
        
        //input jumlah barang yang di beli
        cout<<"  Jumlah Barang\t: ";
        cin>>jumbar[a]; 
	    
	    //harga perbarang
	  	if(Nama_Barang[a] == "IceCreamJasmineBoba" || Nama_Barang[a] == "icecreamjasmineboba"){
		Harga[a] = 22000;
	    }else if(Nama_Barang[a] == "IceCreamMangoPeach" || Nama_Barang[a] == "icecreammangopeach"){
		Harga[a] = 22000;
	    }else if(Nama_Barang[a] == "SundaeOriginal" || Nama_Barang[a] == "sundaeoriginal"){
		Harga[a] = 16000;
	    }else if(Nama_Barang[a] == "SundaeBoba" || Nama_Barang[a] == " sundaeboba"){
		Harga[a] = 16000;
	    }else if(Nama_Barang[a] == "SundaeMango" || Nama_Barang[a] == "sundaemango"){
		Harga[a] = 16000;
	    }else if(Nama_Barang[a] == "SundaeReadBean" || Nama_Barang[a] == "sundaereadbean"){
		Harga[a] = 16000;
	    }else if(Nama_Barang[a] == "MiShakeBoba" || Nama_Barang[a] == "mishakeboba"){
		Harga[a] = 16000;
	    }else if(Nama_Barang[a] == "MiShakeMocha" || Nama_Barang[a] == "mishakemocha"){
		Harga[a] = 16000;
	    }else{
	    cout<<"\n ========================================= "<<endl;
		cout<<"  Maaf Nama Barang Anda Tidak Ada Di Menu  "<<endl;
		cout<<" ========================================= "<<endl;
		exit(0);
	    }
	    
		total[a] = jumbar[a]*Harga[a]; //jumlah harga total barang
        total_semua += total[a]; // menjumlahkan seluruh total barang

    }
    cout<<" =============================== "<<endl;
    //struk pembelian
    cout<<"\n\n\n =========================="<<endl;
    cout<<" = Struk Pembelian Barang ="<<endl;
    cout<<" =========================="<<endl;
    time_t waktusekarang;
    time (&waktusekarang);
    cout<<"  "<<ctime(&waktusekarang);
    cout<<" --------------------------------------------------------------"<<endl;
    cout<<"  No    Nama Barang Pemesanan   Jumlah    Harga Satuan    Total Harga"<<endl;
	for (int i=0;i<jumlah_beli;i++){
		cout<<"  "<<i+1<<setw(25)<<Nama_Barang[i]<<setw(7)<<jumbar[i]<<setw(16)<<Harga[i]<<setw(15)<<total[i]<<endl; //Menampilkan semua nilai array
	}
	
	//diskon yang didapat
	if (total_semua>=50000){
		diskon=0.10;
	} else if (total_semua>=100000){
		diskon=0.15;
	}else if (total_semua>=150000){
		diskon=0.20;
	}else {
		diskon=0;
	}
	
	distal = diskon*total_semua;
	
	cout<<"\n  Diskon        : Rp."<<diskon*total_semua<<endl;
	
	cout<<" --------------------------------------------------------------"<<endl;
	
	cout<<" \n ----------------------------------"<<endl;
	cout<<"  HARGA JUAL\t:"<<total_semua<<endl;
	cout<<" ----------------------------------"<<endl;
	cout<<"  TOTAL\t\t:"<<total_semua-distal<<endl;
	cout<<"  TUNAI\t\t:";
	cin>>tunai;
	cout<<"  KEMBALI\t:"<<(tunai-(total_semua-distal))<<endl;
	cout<<" ----------------------------------"<<endl;
	
	return 0;
}