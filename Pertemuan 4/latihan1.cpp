#include <iostream>
using namespace std;

int main(){
    string kalimat;
    int i;

    system("cls");
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    // a z k a
    for (i = 0; i < kalimat.length();  i++) {
       kalimat[1] = toupper(kalimat[1]);
    }

    cout << "Kalimat dalam huruf kapital: " << kalimat << endl;
}