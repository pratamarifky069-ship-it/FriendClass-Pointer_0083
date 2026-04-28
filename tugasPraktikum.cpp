#include <iostream>
using namespace std;

class BelahKetupat{     // class untuk menghitung luas dan keliling belah ketupat
    private:
        float d1, d2, sisi;

    public:
        void input(){
            cout << "\nBelah Ketupat\n";
            cout << "Masukkan diagonal 1: ";
            cin >> d1;
            cout << "Masukkan diagonal 2: ";
            cin >> d2;
            cout << "Masukkan sisi: ";
            cin >> sisi;
        }
        float luas(){   // menghitung luas berdasarkan diagonal
            return 0.5 * d1 * d2;
        }

        float keliling(){
            return 4 * sisi;
        }

        void output(){
            cout << "Luas Belah Ketupat: " <<luas() <<endl;
            cout << "Keliling Belah Ketupat: " <<keliling() <<endl;
        }
};

class LayangLayang{     // class untuk menghitung luas dan keliling layang-layang
    private:
        float d1, d2;
        float sisi1, sisi2;

    public:
        void input(){
            cout << "Layang-Layang\n";
            cout << "Masukkan diagonal 1: ";
            cin >> d1;
            cout << "Masukkan diagonal 2: ";
            cin >> d2;
            cout << "Masukkan sisi 1: ";
            cin >> sisi1;
            cout << "Masukkan sisi 2: ";
            cin >> sisi2;
        }
        float luas(){
            return 0.5 * d1 * d2;
        }

        float keliling(){
            return 2 * (sisi1 + sisi2);
        }

        void output(){
            cout << "Luas Layang-Layang: " <<luas() <<endl;
            cout << "Keliling Layang-Layang: " <<keliling() <<endl;
        }
        friend float BelahKetupat::keliling();
};

int main(){
    LayangLayang ll;
    BelahKetupat bk;

    ll.input();
    ll.output();

    bk.input();
    bk.output();

    return 0;
}