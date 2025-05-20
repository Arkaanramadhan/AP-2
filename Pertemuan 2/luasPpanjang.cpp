#include <iostream> // header untuk C++
#include <conio.h> // header untuk fungsi getch() dan getche()
using namespace std; // digunakan agar tidak perlu menulis std :: di depan nama - nama yang berasal dari Standard Library C++ , seperti cin, cout, dll

int main() // program utama
{ 
    float Luas, p, l; // variabel Luas, p, l bertipe data float
    system ("CLS"); // digunakan untuk membersihkan layar pada output agar rapi

    cout << " \n Masukkan Panjang =  "; // menampilkan kalimat " Masukkan panjang = "
    cin >> p; // fungsi inputan disimpan pada variabel p

    cout << " \n Masukkan lebar =  "; // menampilkan kalimat " Masukkan lebar = "
    cin >> l; // fungsi inputan disimpan pada variabel l

    Luas = p * l; // variabel Luas menyimpan hasil perhitungan perkalian antara nilai variabel p dan l

    cout << " \nLuas = " << Luas; // menampilkan nilai dari variabel Luas



}
