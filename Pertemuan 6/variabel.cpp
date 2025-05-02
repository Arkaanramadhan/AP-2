# include <iostream>
using namespace std;

string namaGlobal = "Ilmu";// namaGlobal -> variabel global
void namaVariabel()
{
    string namalokal = "komputer";// namalokal -> variabel lokal
    // coba akses
    cout << namalokal << endl;
    // coba akses
    cout << namaGlobal << endl;
}

main()
{
    namaVariabel();
    // coba akses
    // cout << namaGlobal << endl;
    // coba akses
    // cout << namalokal << endl; //ga iso
}