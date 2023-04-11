#include <iostream>
#include <string>
using namespace std;

class Perpus{
  private:
    string pinjam;
    string kembali;

  public:
    void setPinjam(string p){
      pinjam = p;
    }
    void setKembali(string k){
      kembali = k;
    }
    string getPinjam(){
      return pinjam;
    }
    string getKembali(){
      return kembali;
    }
};

int main(){
  Perpus buku;
  buku.setPinjam("Buku Filosofi Teras Dipinjam");
  buku.setKembali("Buku Filosofi Teras Dikembalikan");
  cout <<buku.getPinjam() << " Oleh insan" <<endl;
  cout<<"----------------------------------------------------"<<endl;
  cout <<buku.getKembali() << " Oleh Peminjam bernama insan" << endl;

  return 0;
}