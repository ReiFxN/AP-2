#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Alamat{
    string jalan;
    string kota;
    int kodePos;
};

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    Alamat alamat;
};

int main(){
    system("cls");

    Mahasiswa mhs1;
    mhs1.alamat.jalan = "Jalan Karya Jaya ";
    mhs1.alamat.kota = "Medan ";
    mhs1.alamat.kodePos = 21455;

    Mahasiswa mhs1;

    vector<Mahasiswa> mahasiswa;

    int n;
    cout << "Masukkan banyak mahasiswa: ";
    cin >> n;

    for(int i = 0; i < n; i++) {

        cout << "Mahasiswa " << i + 1 << ":" << endl;

        cin.get();

        cout << "Masukkan nama: ";
        getline(cin, mhs1.nama);

        cout << "Masukkan umur: ";
        cin >> mhs1.umur;

        cout << "Masukkan IPK: ";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1);
    }

    cout << "\n=== Data Mahasiswa ===\n";

    for(int i = 0; i < n; i++) {

        cout << "\nMahasiswa " << i + 1 << ":" << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK  : " << mahasiswa[i].ipk << endl;
    }

    return 0;
}