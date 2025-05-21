#include <iostream> // Header pada C++
using namespace std; // digunakan agar tidak perlu menulis std :: di depan nama - nama yang berasal dari Standard Library C++ , seperti cin, cout, dll


main () // program utama
{
    string kalimat; // variabel kalimat bertipe data string
    int i; // variabel i bertipe data integer
    system("CLS"); // digunakan untuk membersihkan layar pada output agar tidak berantakan
    cout << " Masukkan Kalimat :"; // menampilkan kalimat " Masukkan Kalimat : "
    getline (cin, kalimat); // fungsi masukkan atau inputan dengan spasi dan disimpan pada variabel kalimat

    // a  l y a
    for (i = 0; i < kalimat.length();i++) // perulangan akan berhenti ketika i >= panjang kalimat yang kita input pada variabel kalimat atau kalimat.length()
    // i akan bertambah 1 setiap perulangan
    {
        kalimat[i] = toupper(kalimat[i]); // membuat huruf kecil pada suatu kalimat menjadi kapital dengan mengecek tiap index huruf pada kalimat
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl; // menampilkan isi variabel kalimat yang sudah dikapitalkan semua hurufnya
    return 0; // mengakhiri eksekusi sebuah fungsi
}
