#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Alamat
{
    string jalan;
    string kota;
    int kodePos;
};


struct Mahasiswa
{
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // nested struct
};


main()
{
    system("CLS");
    Mahasiswa mhs1;

    // mhs1.nama = " Arkaan ";
    // mhs1.umur = 20;
    // mhs1.ipk = 4.00;

    // mhs1.alamat.jalan = " Jalan Kapten Muslim ";
    // mhs1.alamat.kota = " Medan ";
    // mhs1.alamat.kodePos = 24140;

    // cout << " Jalan = "<< mhs1.alamat.jalan << endl;
    // cout << " Kota = " << mhs1.alamat.kota  << endl;
    // cout << " KodePos= " << mhs1.alamat.kodePos  << endl;

    vector<Mahasiswa> mahasiswa;
    int n;
    cout << " Masukkan banyak mahasiswa : ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << " mahasiswa " << i+1 << endl;
        cin.get();
        cout << " masukkan nama : ";
        getline(cin, mhs1.nama);

        cout << " masukkan umur : ";
        cin >> mhs1.umur;

        cout << " masukkan ipk : ";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1);
    }

    for(int i = 0; i < n;  i++)
    {
        cout << " Mahasiswa : " << i + 1 << endl;
        cout << " Nama : " <<mahasiswa[i].nama << endl;
        cout << " Umur : " <<mahasiswa[i].umur << endl;
        cout << " IPK  : " <<mahasiswa[i].ipk << endl;
    }


}