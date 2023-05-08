#include <iostream>
#include <string>
using namespace std;

class DataMahasiswa {
    protected:
        string status_mhs;
        string nama;
        int umur;
        string jurusan;
        string fakultas;
    public:
        DataMahasiswa(string status, string name, int Umur, string jrsn, string fklts) {
            status_mhs = status;
            nama = name;
            umur = Umur;
            jurusan = jrsn;
            fakultas = fklts;
        }
        virtual void output() {
            cout << "Status Mahasiswa : " << status_mhs << endl;
            cout << "Nama : " << nama << endl;
            cout << "Umur : " << umur << endl;
            cout << "Jurusan : " << jurusan << endl;
            cout << "Fakultas : " << fakultas << endl;
        }
};

class Alumni : public DataMahasiswa {
    private:
        int tahun_lulus;
        string pekerjaan;
    public:
        Alumni(string status, string name, int umr, string jrsn, string fklts, int tl, string pkrjn) : DataMahasiswa(status, name, umr, jrsn, fklts) {
            tahun_lulus = tl;
            pekerjaan = pkrjn;
        }
        void output() {
            cout << "Status Mahasiswa : " << status_mhs<< endl;
            cout << "Nama : " << nama << endl;
            cout << "Umur : " << umur << endl;
            cout << "Jurusan : " << jurusan << endl;
            cout << "Fakultas : " << fakultas << endl;
            cout << "Tahun Lulus : " << tahun_lulus << endl;
            cout << "Pekerjaan : " << pekerjaan << endl;
        }
};

int main() {
    DataMahasiswa *M[2];
    M[0] = new DataMahasiswa("Mahasiswa Aktif", "muhammad insan fajri hermawan", 19, "Teknologi Informasi", "Informatika dan Pariwisata");
    M[1] = new Alumni("Alumni", "ivan mahendra", 28, "Akuntansi", "Bisnis", 2016, "Bekerja di Bank BNI");

    cout << "Data Mahasiswa" << endl;
    for (int i = 0; i < 2; i++) {
        M[i]->output();
        cout << endl;
    }

    return 0;
}