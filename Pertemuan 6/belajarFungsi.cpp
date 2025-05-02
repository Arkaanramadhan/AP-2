# include <iostream>
using namespace std;

void sapa(string nama)// nama sebagai Parameter Formal -> digunakan pada saat Fungsi dibuat
{
    cout <<  " Hallo " << nama << " Selamat Datang di AP 2! " << endl;
}
main()
{
    string namaPengguna = " Arkan ";
    sapa(namaPengguna); // namaPengguna sebagai Parameter Aktual -> dibuat pada saat pemanggilan Fungsi
    return 0;
}
