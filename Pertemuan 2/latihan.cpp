#include <iostream> // header untuk C++
#include <conio.h> // header untuk fungsi getch() dan getche()
using namespace std; // digunakan agar tidak perlu menulis std :: di depan nama - nama yang berasal dari Standard Library C++ , seperti cin, cout, dll


int main() // program utama 
{ 
    float r, volume, lp; // variabel r, volume, lp bertipe data float
    const float phi = 3.14; // memberi nilai variabel phi menggunakan const agar tidak dapat diubah setelah diinisialisasi

    cout << " \n Masukkan jari-jari =  "; // menamilkan kalimat " Masukkan jari-jari : "
    cin >> r; // fungsi inputan pada variabel r

    // (float) 4/3 digunakan agar hasil perhitungan 4/3 dalam bentuk tipe float
    volume = ((float)4/3) * phi * r * r * r ; // variabel volume menyimpan hasil perhitungan rumus volume bola
    lp = 4 * phi * r * r; // variabel lp menyimpan hasil perhitungan rumus luas permukaan bola

    cout << " \nVolume = " << volume; // menampilkan nilai variabel volume
    cout << " \nLuas Permukaan = " << lp; // menampilkan nilai variabel lp



}
