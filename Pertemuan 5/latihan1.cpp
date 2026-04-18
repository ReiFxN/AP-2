#include <iostream>
using namespace std;

int main() {
    // penjumlahan  matriks 2x2
    int matrix[2][2];
    int matrix2[2][2];
    int hasil[2][2];

    //matriks 1
    cout << "matriks 1" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "elemen matriks" << i+1 << "Kolom" << j+1 << ": ";
            cin >> matrix[i][j];
        }
    }
    // matriks 2
    cout << "matriks 2" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "elemen matriks" << i+1 << "Kolom" << j+1 << ": ";
            cin >> matrix2[i][j];
        }
    }
    // hasil penjumlahan
    cout << "hasil penjumlahan << endl";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            hasil[i][j] = matrix[i][j] + matrix2[i][j];
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }
}