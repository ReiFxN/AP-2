#include <iostream>
#include <string>
#include <array>
using namespace std;

int main () {

    //string nama[5];
    //nama[0] = "Azka";
    //nama[1] = "Ilam";
    //nama[2] = "Ajan";
    //nama[3] = "Dewi";
    //nama[4] = "Dian";

    //cara ke 2
    //string nama2[5] = {"Azka", "Ilam", "Ajan", "Dewi", "Dian"};
    //string nama3[] = {"Azka", "Ilam", "Ajan", "Dewi", "Dian"};
    
    // pakai looping
    //for (int i = 0; i < 5; i++) {
    //    cout << nama[i] << endl;
    //}

    // decsend
    //for (int i = 4; i >= 0; i--) {
    //    cout << nama[i] << endl;
    //}

    //cout << nama[2] << endl;
    // multidemensional array
    // 1 2 3
    // 4 5 6

    //int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    //for (int i = 0; i < 2; i++) {
    //    for (int j = 0; j < 3; j++) {
    //        cout << matrix[i][j] << " ";
    //    }
    //    cout << endl;
    //}

    //String (array of char)
    //string nama = "Azka";
    //cout << nama[0] << endl; // A
    //cout << nama[1] << endl; // z
    //cout << nama[2] << endl; // k
    //cout << nama[3] << endl; // a

    // fungsi pengolahan string
    //string s1 = "Hello";
    //string s2 = "World";
    
    // 1. s1 + s2
    //s1 = s2;
    //cout << "s1 sekarang: " << s1 << endl;

    //2. s1 = s1 + s2
    //s1 = "Hello";
    //cout << "hasil gabungan: " << s1 + s2 << endl;

    //3. s1.lenght()
    //cout << s1.length() << endl;
    //cout << (s1 + s2).length() << endl;

    // 4. s1.substr(n, m) n itu mulai dari berapa, m itu panjang berapa
    //cout << s1.substr(2, 3) << endl;

    // operator sizeoff
    // int angka = 10;
    // cout << sizeof(angka) << endl; // 4 byte

    // int nilai[] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai);

    //array library
    // misal array biasa : float nilai[5];
    array<float, 5> nilai = {87.5, 90, 100, 95.7, 78.3};
    cout << "Nilai :" ;

    for (int i = 0; i < nilai.size(); i++) {
        cout << nilai[i] << " ";
    }
    

}