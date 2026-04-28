// program dynamic allocation menggunakan pointer
#include <iostream>
using namespace std;

class mahasiswa{
    public:
        int nim;
        void showNim(){
            cout << "No Induk = " <<nim <<endl;
        }
};

int main(){
    // alokasi memori menggunakan new
    mahasiswa *mhs = new mahasiswa[1];  // pointer Object mhs
    mhs->nim = 2;
    mhs->showNim();
    delete mhs;
    return 0;
}