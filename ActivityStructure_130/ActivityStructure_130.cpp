
#include <iostream>
using namespace std;

struct mahasiswa
{
    string NIM;
    string nama;
    string alamat;
    string umur;
};

int main() {
    mahasiswa mhs1, mhs2;

    mhs1.NIM = "20220140130";
    mhs1.nama = "Ahmad Kevin Zain";
    mhs1.alamat = "Wonosobo";
    mhs1.umur = "20";

    cout << "Masukan NIM :";
    cin >> mhs2.NIM;
    cout << "Masukan Nama :";
    cin >> mhs2.nama;
    cout << "Masukan Alamat :";
    cin >> mhs2.alamat;
    cout << "Masukan Umur :";
    cin >> mhs2.umur;

    cout << "\nNIM = " << mhs1.NIM;
    cout << "\nnama = " << mhs1.nama;
    cout << "\nalamat = " << mhs1.alamat;
    cout << "\numur = " << mhs1.umur;

    cout << "\n\nNIM = " << mhs2.NIM;
    cout << "\nnama = " << mhs2.nama;
    cout << "\nalamat = " << mhs2.alamat;
    cout << "\numur = " << mhs2.umur;


}

