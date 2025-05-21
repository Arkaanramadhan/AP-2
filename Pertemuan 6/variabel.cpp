# include <iostream> // Header pada C++
using namespace std; // digunakan agar tidak perlu lagi menulis std :: pada setiap instruksi program

string namaGlobal = "Ilmu";// namaGlobal -> variabel global
void namaVariabel()
{
    string namalokal = "komputer";// namalokal -> variabel lokal
    // coba akses
    cout << namalokal << endl; // menampilkan komputer
    // coba akses
    cout << namaGlobal << endl; // menampilkan Ilmu
}

main()
{
    namaVariabel();
    // coba akses
    // cout << namaGlobal << endl; // variabel global dapat diakses dari luar maupun dari dalam fungsi sehingga akan menampilkan keluaran Ilmu
    // coba akses
    // cout << namalokal << endl; // variabel lokal hanya dapat diakses dari dalam fungsi sehingga baris ini tidak menampilkan ouput atau tidak bisa
}
