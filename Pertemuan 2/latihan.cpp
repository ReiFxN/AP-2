#include <iostream>
using namespace std;

int main () {
    float r;
    const float pi = 3.14;
    
    cout << "masukkan jari jari bola: ";
    cin >> r;
    
    float luas = 4 * pi * r * r;
    float volume = (4.0/3.0) * pi * r * r * r;
    
    cout << "Luas permukaan bola: " << luas << endl;
    cout << "volume bola : " << volume << endl;
    
    return 0;
}