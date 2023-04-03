
#include <iostream>
using namespace std;

struct AlamatDetail
{
    string desa;
    string kota;
};

struct Mahasiswa
{
    string NIM;
    string nama;
    AlamatDetail alamat;
    int umur;
};

int main() {
    Mahasiswa mhs;

    cout << "Masukan NIM :";
    cin >> mhs.NIM;
    cout << "Masukan Nama :";
    cin >> mhs.nama;
    cout << "alamat :";
    cout << "\n\tMasukan desa :";
    cin >> mhs.alamat.desa;
    cout << "\tMasukan kota :";
    cin >> mhs.alamat.kota;
    cout << "Masukan umur :";
    cin >> mhs.umur;

    cout << "\n\nNIM = " << mhs.NIM;
    cout << "\nnama = " << mhs.nama;
    cout << "\ndesa = " << mhs.alamat.desa;
    cout << "\nkota = " << mhs.alamat.kota;
    cout << "\numur = " << mhs.umur;
}

