#include <iostream>
using namespace std;

void ubahNilai(int *p){
    *p = 20;
}

int main(){
    system("cls");

    //1. pointer dalam pointer
    cout << "=== Pointer dalam Pointer ===" << endl;
    int a = 64;
    int *p = &a;
    int **pp = &p;

    cout << "Nilai a : " << a << endl;
    cout << "Nilai *p : " << *p << endl;
    cout << "Nilai **pp : " << **pp << endl;

    cout << "=== Pointer array ===" << endl;
    int arr[3] = {1, 2, 3};
    int *ptr = arr;

    cout << "Elemen 1 : " << *ptr << endl;
    cout << "Elemen 2 : " << *(ptr + 1) << endl;
    cout << "Elemen 3 : " << *(ptr + 2) << endl;

    cout << "=== Pointer Dalam String ===" << endl;
    char *organisasi = "Ilmu Komputer Laboratory Center";
    cout << "Awal : " << organisasi << endl;

    organisasi += 5;
    cout << "Geser : " << organisasi << endl;

    cout << "=== Pointer sebagai Parameter ===" << endl;

    int x = 5;
    cout << "Sebelum : " << x << endl;

    ubahNilai(&x);
    cout << "Sesudah : " << x << endl;
}