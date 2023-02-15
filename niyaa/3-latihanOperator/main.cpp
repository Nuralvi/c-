#include <iostream>

using namespace std;

int main()
{
    int  a, t, r;
    float LuasSegitiga,LuasLingkaran;
    float phi = 3.14;

    cout << "===================================" << endl;
    cout << "APLIKASI PENGHITUNG SEGITIGA " << endl;
    cout << "===================================" << endl;


   cout << "masukan alas segitiga : ";
   cin >> a;
   cout << "masukan tinggi segitiga :";
   cin >> t;
   LuasSegitiga = 0.5*a*t;
   cout << "LuasSegitiga adalah" << LuasSegitiga <<" cm2" << endl;

    cout << "===================================" << endl;
    cout << "APLIKASI PENGHITUNG LINGKARAN " << endl;
    cout << "===================================" << endl;
    cout << "MASUKAN JARI-JARI LINGKARAN :";
    cin >> r;
    LuasLingkaran = phi*r*r;
    cout << "Luas Lingkaran adalah" << LuasLingkaran<<"cm2" <<endl;

  return 0;

}
