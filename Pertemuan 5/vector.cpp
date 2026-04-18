#include <iostream>
#include <vector>
using namespace std;

int maint (){
    // vector declaration & initialization
    vector<string> nama = {"Azka", "Ilam", "Ajan", "Dewi", "Dian"};

    // tampilkan data ascending
    for (int i = 0; i < nama.size(); i++) {
        cout << nama[i] << endl;
    }

    // add data to vector
    nama.push_back("Rizky");

    // tampilkan data ascending
    for (int i = 0; i < nama.size(); i++) {
        cout << nama[i] << endl;
    }

    // delete data from vector
    nama.pop_back();
    nama.erase(nama.begin() + 1);

    for (int i = 0; i < nama.size(); i++) {
        cout << nama[i] << endl;
    }
}
