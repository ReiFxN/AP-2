#include <iostream>
using namespace std;

class ContohAkses{
    private:
        int privateVar;
    protected:
        int protectedVar;
    public:
        int publicVar;
    //constructtor
    ContohAkses(){
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }
    void TampilkanSemua(){
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

//inheritance (pewarisan), class turunan
class Turunan : public ContohAkses {
    public:
    void aksesProtected() {
        //cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};
int main(){
    system("cls");
    ContohAkses obj;
    obj.TampilkanSemua();

    cout << "\n Akses dari luar kelas: " << endl;
    //cout << obj.privateVar << endl;
    //cout << obj.protectedVar << endl;
    cout << obj.publicVar << endl;

    cout << "Akses Turunan : " << endl;
    Turunan tur;
    tur.aksesProtected();
}