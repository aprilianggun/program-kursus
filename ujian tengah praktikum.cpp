#include<iostream>
using namespace std;

int total(int t, int biayadaftar){
return t+biayadaftar;
}
int main(){
	//kursus
	int gelombang, uangpendaftaran, lamakursus, i, biayakursus, jumlah,n, biayadaftar,tidakterdeteksi, t=0; 
	string nama;
	
cout<<"--------------------Lembaga Kursus Bahasa Inggris------------------------"<<endl;
cout<<"                         ENGLISH INSTITUTE                               "<<endl;
cout<<"                                                                         "<<endl;

cout<<"        ==========================================================       "<<endl;
cout<<"        |Daftar Paket Kursus Bahasa Inggris   |Biaya Kursus/bulan|       "<<endl;
cout<<"        ==========================================================       "<<endl;
cout<<"        |1. English Conversation              |      1500000     |       "<<endl;
cout<<"        |2. Grammar Focus                     |      1000000     |       "<<endl;
cout<<"        |3. TOEFL                             |      2200000     |       "<<endl;
cout<<"        |4. IELTS                             |      2500000     |       "<<endl;
cout<<"        |_____________________________________|__________________|       "<<endl;
cout<<"        |                Biaya Pendaftaran = 100000              |       "<<endl;
cout<<"        |________________________________________________________|       "<<endl;

    cout<<"                                                         "<<endl;
    cout<<"Masukkan Nama                            = "; getline(cin,nama);
    cout<<"gelombang[1/2/3]                         = "; cin>>gelombang;
	cout<<"biaya pendaftaran                        = "; cin>>uangpendaftaran;
    cout<<"Jumlah Paket yang Diambil[1/2/3/4]       = "; cin>>jumlah;
    cout<<"_______________________________________"<<endl;
    
    //Penggunaan array dan looping
    int jenis[jumlah];
    for(n=1;n<=jumlah;n++){
	cout<<"Jenis Paket yang Diambil ke-"<<n+0<<" = "; cin>>jenis[n];
	cout<<"--------------------------------------|"<<endl;
	cout<<"biaya kursus                          |=  "; cin>>biayakursus;
	cout<<"lama kursus                           |=  "; cin>>lamakursus;
	cout<<"______________________________________|   "<<endl;
	t=t+(biayakursus*lamakursus);
	cout<<"Total = "<<t<<endl;
	cout<<"_______________________________________"<<endl;
}
    cout<<"__________________________________________________________________________"<<endl;
    
    //percabangan
		if(gelombang==1){
		biayadaftar = (uangpendaftaran-(uangpendaftaran*50/100));
	}else if(gelombang==2){
		biayadaftar = (uangpendaftaran-(uangpendaftaran*25/100));
	}else if(gelombang==3){
		biayadaftar = (uangpendaftaran);
	}else {
		biayadaftar = tidakterdeteksi;
	}
	cout<<"yang harus dibayarkan untuk mendaftar= "<< biayadaftar <<endl;
	
	cout<<"__________________________________________________________________________"<<endl;
 
    cout<<"                                                                           "<<endl;
    cout<<"             Data Pendaftar Kursus ENGLISH INSTITUTE                     "<<endl;
    cout<<"             =======================================                     "<<endl;
    cout<<"                                                                         "<<endl;
    cout<<"Nama                                = "<<nama<<endl;
    for(n=1;n<=jumlah;n++){
    cout<<"Jenis Paket ke-"<<n+0<<"                    =" << jenis[n] <<endl;
	}
    cout<<"Total Biaya kursus                  = "<<t<<endl;
    //fungsi
	cout<<"Total Biaya Kursus dan Pendaftaran  = "<<total(t,biayadaftar)<<endl;
}

