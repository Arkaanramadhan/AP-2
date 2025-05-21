#include <iostream> //  Header pada C++
using namespace std; // digunakan agar tidak perlu lagi membuat std :: pada tiap instruksi program

struct Mahasiswa // struct fungsinya sama seperti array, tetapi struct dapat menyimpan beberapa data dengan tipe data yang berbeda, dan struct ini bernama Mahasiswa
{
    string nama; // variabel nama bertipe data string
    int umur; // variabel umur bertipe data integer
    float ipk; // varibel ipk bertipe dta float
}; // pada akhir struct harus menggunakan ;

main() // program utama
{
    system("CLS"); // digunakan untuk membersihkan layar pada output
    Mahasiswa mhs1; // membuat variabel mhs1 menjadi objek baru dari struct Mahasiswa

    mhs1.nama = " Arkaan "; // sehingga pemanggilan menggunakan objek atau mhs1.nama_variabel_dlm_struct
    mhs1.umur = 20; //umur bertipe data integer pada struct
    mhs1.ipk = 4.00; // ipk bertipe data float pada struct

    // cout << " nama = " << mhs1.nama  << endl; // akan menampilkan nama = Arkaan
    // cout << " umur = " << mhs1.umur  << endl; // akan menampilkan umur = 20
    // cout << " ipk = " << mhs1.ipk  << endl;// akan menampilkan ipk = 4.00

    Mahasiswa *ptrMhs = &mhs1; // ptMhs akan menunjuk isi dari alamat yang ada pada mhs1
    cout << " Nama = " << ptrMhs->nama << endl; // pendeklarasian nya ptrMhs ->nama_variabel_dlm_struct
    cout << " Umur = " << ptrMhs->umur << endl; // akan menampilkan  umur = 20
     cout << " ipk = " << ptrMhs->ipk << endl; // akan menampilkan ipk =4.00
    
    
}
