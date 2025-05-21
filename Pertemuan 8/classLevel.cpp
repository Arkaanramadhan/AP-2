#include <iostream>
using namespace std;

class ContohAkses // Class mendukung pemograman berorientasi objek dan dapat mengontrol akses data sehingga terjamin kerahasiaan dan keamanan data nya 
{
    private : // dapat diakses dari mana saja : dari luar class, dalam class , maupun oleh objek
        int privateVar;

    protected : // Mirip private , tidak bisa diakses dari luar class , tetapi bisa diakses oleh kelas turunan
        int protectedVar;

    public : // hanya bisa diakses dari dalam class itu sendiri
        int publicVar;

        // constructor
        ContohAkses() //fungsi memberi nilai pada tiap variabel
        {
            privateVar = 1; 
            protectedVar = 2;
            publicVar = 3;
        }
    

    void tampilkansemua() // fungsi tanpa  nilai balikan, hanya untuk menampilkan keluaran
    {
        cout << "  Akses dari dalam class : " << endl;
        cout << privateVar << endl; // dapat diakses di dalam class sehingga menampilkan 1
        cout << protectedVar << endl; // dapat diakses di dalam class sehingga menampilkan 2
        cout << publicVar << endl; // dapat diakses di dalam class sehingga menampilkan 3

    }

}; // class harus diakhiri dengan ;

// kelas turunan 
class Turunan  : public ContohAkses
{
    public :
    void aksesProtected()
    {
        cout << " Akses publicVar : " << publicVar << endl;  // dapat diakses di class turunan sehingga menampilkan 3
        cout << " Akses ProtectedVar : " << protectedVar << endl; // dapat diakses di class turunan sehingga menampilkan 2
        // cout << " Akses privateVar : " << privateVar << endl;  // tidak dapat diakses di Class turunan
    }
};


main() // program utama
{
    ContohAkses obj; // variabel obj menjadi objek dari Class ContohAkses
    obj.tampilkansemua(); //  memanggil fungsi tanpa balikan dengan format nama_objek.nama_fungsi

    cout << " Akses dari luar class : " << endl;
    cout << obj.publicVar << endl; // dapat diakses di luar class sehingga menampilkan 3
//     cout << obj.privateVar << endl; // tidak dapat diakses di luar Class
//     cout << obj.protectedVar << endl;  // tidak dapat diakses di luar Class

    Turunan tur; // mmembuat tur menjadi class turunan
    tur.aksesProtected(); // memanggil fungsi tanpa nilai balikan


}
