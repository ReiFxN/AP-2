#include <iostream>
using namespace std;

int main(){
    system("cls");

    // 1. operasi penugasan
    cout << " === Operasi Penugasan ===" << endl;
    int a = 10;
    int *p;
    p = &a;

    cout << "Nilai a :" << a << endl;
    cout << "Alamat a (&a) : " << &a << endl;
    cout << "isi pointer p : " << p << endl;
    cout << "Nilai *p : " << *p << endl;

    // operasi aritmatika
    cout << "=== Operasi Aritmatika ===" << endl;
    int nilai[3];
    int *oke;

    nilai[0] = 125;
    nilai[1] = 345;
    nilai[2] = 750;

    oke = &nilai[0];

    cout << "Nilai " << *oke << " ada di alamat " << oke << endl;
    cout << "Nilai " << *(oke + 1) << " ada di alamat " << (oke + 1) << endl;
    cout << "Nilai " << *(oke + 2) << " ada di alamat " << (oke + 2) << endl;
    
    // operasi logika
    cout <<  "=== Operasi Llogika ===" << endl;
    int x = 5, y = 10;
    int *p1 = &x; // p1 ---> alamat x
    int *p2 = &y; // p2 ---> alamat y
    int *p3 = &x; // p3 ---> alamat x

    if (p1 == p3) {
        cout << "p1 dan p3 menunjuk alamat yang sama" << endl;
    }

    if (p1 != p2){
        cout << "p1 dan p2 menunjuk ke alamat yg berbeda" << endl;
    }

    int *p4 = NULL;
    if (p4 == NULL){
        cout << "p4 adalah pointer null" << endl;
    }
    return 0;
}