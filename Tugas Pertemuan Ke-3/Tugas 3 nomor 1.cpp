#include <iostream>
using namespace std;

int main(){

    const int Max=50;
    int a, i;
    int data[Max];
    
  cout << "Masukan banyak nilai : ";
    cin >> a;
    cout << endl;
    for(int i=0;i<a;i++){
      cout << "Masukan nilai ke - " << i+1 << " : ";
      cin >> data[i];
      cout << endl;
    };
    int cari;
  bool ketemu = true;
    cout << "Masukan bilangan yang ingin dicari : ";
    cin >> cari;
    for (i = 0; i < Max; i++){
        if(data[i] == cari){
            ketemu = true;
            break;
        }
    }

    if (ketemu = true){
        cout << cari << " ditemukan pada Nilai ke-" << i << endl;
    } if(ketemu = false) {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }
    
    return 0;
}