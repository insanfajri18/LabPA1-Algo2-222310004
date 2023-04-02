#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#define MAX 1000

using namespace std;

int nomor[MAX];
int awal=-1;
int akhir=-1;

bool IsEmpty(){
   if(akhir == -1){
       return true;
   }else{
       return false;
   }
}
bool IsFull(){
   if(akhir == MAX-1){
       return true;
   }else{
       return false;
   }
}
void AntrianMasuk(int no){
    if (IsEmpty()){
        awal=akhir=0;
    }else {
        akhir++;
    }
    nomor[akhir]=no;
}
void AntrianKeluar(){
    if(IsEmpty()){
        cout<<"Antrian sudah kosong !";
        getchar();
    }else {
        for(int x=awal;x<akhir;x++){
            nomor[x]=nomor[x+1];
        }
        akhir--;
        if(akhir == -1){
            awal = -1;
        }
    }
}
void Clear(){
     awal=akhir=-1;
}
void View(){
     if(IsEmpty()){
         cout<<"Antrian kosong !";

     }else {
         for(int x=awal;x<=akhir;x++){
              cout << "==============================="
                   << "\n >> No. Antrian ke : (" << nomor[x] << ")"
                   << "\n==============================="<< endl;
         }
     }
}
int main(){
    int pilihan, c=1, urut;
    do{
        cout << "\n\n=====   MENU TICKETING   ===="
             << "\n==============================="
             << "\n|1. Tambah Pembeli            |"
             << "\n|2. Panggil Pembeli           |"
             << "\n|3. Lihat daftar Pembeli      |"
             << "\n|4. Format                    |"
             << "\n|5. Exit                      |"
             << "\n===============================";
        cout << "\nPilih Menu : "; cin >> pilihan;
        cout << "\n\n";
        if(pilihan == 1){
            if(IsFull()) {
                cout<<"Antrian sudah penuh, mohon tunggu beberapa saat lagi ";
            }
            else{
                urut=c;
                AntrianMasuk(urut);
                cout << "---------------------------------" << endl;
                cout << "|          NO. ANTRIAN          |" << endl;
                cout << "|               " << c << "              ||" << endl;
                cout << "---------------------------------" << endl;
                cout << "|       Silahkan Mengantri      |" << endl;
                cout << "|      Menunggu " << akhir << " Antrian      ||" << endl;
                cout << "---------------------------------" << endl;
                c++;
            }
        }
        else if(pilihan == 2){
            cout << "=================================" << endl;
            cout << "No. Antrian ke : (" << nomor[awal] << ")";
            cout << "\n=================================" << endl;
            AntrianKeluar();
            cout << "Silahkan Dipanggil !" << endl;
        }
        else if(pilihan == 3){
            View();
        }
        else if(pilihan == 4){
            Clear();
            cout<<"Antrian dikosongkan ! ";
        }
        else if(pilihan == 5){
        }
        else{
            cout << "Pilihan anda salah ! \n"<< endl;
        }
        getchar();
    }while(pilihan!=5);
}