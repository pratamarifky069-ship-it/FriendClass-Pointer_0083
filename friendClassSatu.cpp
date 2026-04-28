// program friend class
#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang{
    private:
        string nama;

    public:
        void setNama(string pNama);
        friend class siswa;     // deklarasi friend class agar bisa akses private
};

class siswa{
    private:
        int id;

    public:
        void setId(int pId);
        void displayAll(orang &a);   // menampilkan data siswa dan orang
};

void siswa::displayAll(orang &a){
    cout <<id <<endl <<a.nama;
}
void orang::setNama(string pNama){
    nama = pNama;
}
void siswa::setId(int pId){
    id = pId;
}

int main(){
    orang joko;
    joko.setNama("Joko Susilo");
    siswa joko_siswa;
    joko_siswa.setId(1);
    joko_siswa.displayAll(joko);
    return 0;
}