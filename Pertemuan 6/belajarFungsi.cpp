# include <iostream> // header pada C++
using namespace std;  //  digunakan agar tidak perlu lagi menulis std :: pada setiap instruksi program

// fungsi sapa merupakan fungsi tanpa nilai  balikan
void sapa(string nama)// nama sebagai Parameter Formal -> dibuat pada saat Fungsi dibuat
{
    cout <<  " Hallo " << nama << " Selamat Datang di AP 2! " << endl; // akan menampilkan output Hallo Arkan Selamat Datang di AP 2!
}
main()
{
    string namaPengguna = " Arkan ";
    sapa(namaPengguna); // namaPengguna sebagai Parameter Aktual -> dibuat pada saat pemanggilan Fungsi, nama parameter aktual akan berubah menjadi nama parameter formal ketika masuk ke fungsi
    return 0; // digunakan untuk mengakhiri program suatu fungsi
}
