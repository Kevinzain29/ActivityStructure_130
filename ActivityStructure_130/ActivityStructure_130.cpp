
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
    mahasiswa mhs1; mhs2;

    mhs1.NIM = "20220140130";
    mhs1.nama = "Ahmad Kevin Zain";
    mhs1.alamat = "Wonosobo";
    mhs1.umur = "20";

    cout << "Masukan NNIM :";
    cin >> mhs2.NIM;
    cout << "Masukan Nama :";
    cin >> mhs2.Nama;
    cout << "Masukan Alamat :";
    cin >> mhs2.alamat;
    cout << "Masukan Umur :";
    cin >> mhs2.umur;

}

