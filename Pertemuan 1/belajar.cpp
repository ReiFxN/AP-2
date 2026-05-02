#include <iostream>
#include <conio.h>
using namespace std;

int main() {

    string nama;
    char kom;
    int nim;
    float ipk;
    cout << "Hello, World!" << endl;

    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan Kom: ";
    cin >> kom;
    cout << "Masukkan NIM: ";
    cin >> nim;
    cout << "Masukkan IPK: ";
    cin >> ipk;

    cout << "\n" << "Nama: " << nama << endl;
    cout << "Kom: " << kom << endl;
    cout << "NIM: " << nim << endl;
    cout << "IPK: " << ipk << endl;
    return 0;
}