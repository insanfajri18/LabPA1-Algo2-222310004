#include <iostream>
using namespace std;

class contoh{ // mendeklarasi bahwa contoh merupakan class
private: // di dalam class contoh terdapat akses private
  int nilai; // di dalam akses private terdapat variable nilai dengan type data interger
public: // di dalam class contoh terdapat akses public
  contoh (int n){ // di dalam akses public di deklarasikan bahwa n merupakan varibel bertype data interger dan masuk kedalam subclass contoh
    nilai = n; //mendeklarasi bahwa "nilai" sama dengan "n"
  }
int getNum(){ // mendeklarasikan bahwa terdapat variable bernama "getNum" dengan type data interger
  return nilai; // mengembalikan nilai yang ada pada variable "nilai"
}
};
int main() {
  contoh obj(10); // memanggil class contoh dengan objek "obj" yang berisikan nilai 10
  cout<<"nilai yang diinput: "<<obj.getNum()<<endl; // menampilkan kalimat " nilai yang diinput: " setelah kalimat tersebut maka di panggilah objek yang sudah di deklarasikan yang bernama "obj" sekaligus mengambil nilai yang sudah di deklarasikan pada lane 16 atau yang sudah di inisialisasi data member
  return 0; // mengembalikan nilai menjadi 0
}
// program ini merupakan constructor