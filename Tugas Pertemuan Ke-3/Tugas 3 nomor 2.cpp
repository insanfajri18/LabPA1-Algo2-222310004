#include <iostream>
#include <algorithm>
using namespace std;

const int Max = 50;
string buku[Max];

int binarySearch (string x, int y, int z){
    if (z >= 1) {
        int mid = 1 + (z - 1)/2;
        if (buku[mid] == x)
            return mid;
        if (buku[mid] > x)
            return binarySearch (x,y,mid - 1);
        return binarySearch (x,mid + 1, z);
    }
    return -1;
}

int main(){
    int q;

    cout <<"Masukkan banyak buku : ";
    cin >> q;


    for (int i=0 ; i<q ; i++){
        cout <<"Masukkan nama buku ke-"<< i+1 <<" : ";
        cin >> buku[i];
    }
    sort (buku, buku + q);

    string s;
    cout <<"Masukkan nama buku yang ingin dicari :";
    cin >> s;

    int hasil = binarySearch (s, 0 ,q -1);
    if (hasil == -1 ){
    cout <<"Nama yang dimasukkan tidak ditemukan." <<endl;
    }else{
    cout <<"Buku ditemukan pada nomor "<<hasil<<endl;
    }
    return 0;
}