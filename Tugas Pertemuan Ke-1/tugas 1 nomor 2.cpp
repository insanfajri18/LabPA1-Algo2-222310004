#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string arr[], int a);

int main() {
    int a;

    cout << "Masukkan jumlah buku : ";
    cin >> a;

    string judul[a];

    
    for (int i = 0; i < a; i++) {
        cout << "Masukkan judul buku ke-" << i+1 << ": ";
        cin >> judul[i];
    }

    
    bubbleSort(judul, a);

  
    cout << "\nJudul buku yang sudah diurutkan :\n";
    for (int i = 0; i < a; i++) {
        cout << judul[i] << endl;
    }

    return 0;
}


void bubbleSort(string arr[], int a) {
    for (int i = 0; i < a-1; i++) {
        for (int b = 0; b < a-i-1; b++) {
            if (arr[b] > arr[b+1]) {
                swap(arr[b], arr[b+1]);
            }
 }
}
}