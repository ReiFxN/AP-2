#include <iostream>
using namespace std;

int main () {
    int a, b;

    system("CLS");

    a = 5;
    b = 3;

    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    float bagi = a / b;
    int modulo = a % b;

    //cout << "Hasil Penjumlahan : " << tambah << endl;
    //cout << "Hasil Pengurangan : " << kurang << endl;
    //cout << "Hasil Perkalian : " << kali << endl;
    //cout << "Hasil Pembagian : " << bagi << endl;
    //cout << "Hasil sisa bagi : " << modulo << endl;

    //cout << (a == b) << endl;
    //cout << (a < b) << endl;
    //cout << (a != b) << endl;

    //cout << (true && true) << endl;
    //cout << (true && false) << endl;

    //cout << (true || false) << endl;
    //cout << (false || false) << endl;

    //cout << !true << endl;
    //cout << !false << endl;

    //cout << (5 & 7) << endl;
    //cout << (5 | 7) << endl;
    //cout << (5 ^ 7) << endl;
    //cout << (~7) << endl;
    //cout << (7 << 2) << endl;
    //cout << (7 >> 2) << endl;

    int max;
    max = (a > b) ? a : b;
    cout << "nilai terbesar :" << max << endl;

    a += 7; // a = a + 7,
    cout << a << endl;

    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;


}