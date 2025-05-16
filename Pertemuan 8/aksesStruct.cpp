#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    int umur;
    float ipk;
};

main()
{
    system("CLS");
    Mahasiswa mhs1;

    mhs1.nama = " Arkaan ";
    mhs1.umur = 20;
    mhs1.ipk = 4.00;

    // cout << " nama = " << mhs1.nama  << endl;
    // cout << " umur = " << mhs1.umur  << endl;
    // cout << " ipk = " << mhs1.ipk  << endl;

    Mahasiswa *ptrMhs = &mhs1;
    cout << " Nama = " << ptrMhs->nama << endl;
    cout << " Umur = " << ptrMhs->umur << endl;
     cout << " ipk = " << ptrMhs->ipk << endl;
    
    
}