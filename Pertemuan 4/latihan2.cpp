# include <iostream> // Header pada C++
using namespace std; // digunakan agar tidak perlu menulis std :: di depan nama - nama yang berasal dari Standard Library C++ , seperti cin, cout, dll


int main() // program Utama
{
    string kalimat; // variabel kalimat bertipe data string
    int i; // variabel i bertipe data integer

    system("CLS"); // digunakan untuk membersihkan layar pada output agar tidak berantakan

    cout << "Masukkan kalimat : "; // menampilkan kalimat " Masukkan Kalimat : "
    getline(cin, kalimat); // fungsi masukkan atau inputan dengan spasi dan disimpan pada variabel kalimat

    for (i = 0; i < kalimat.length(); i++) // perulangan akan berhenti ketika i >= panjang kalimat yang kita input pada variabel kalimat atau kalimat.length()
    // i akan bertambah 1 setiap perulangan
        
    {
        if (kalimat[i] == 'a'|| kalimat[i] == 'e' || kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u') // kondisi jika ada huruf kecil a, i, i, o, u pada kalimat yang diinput user atau pada index panjang kalimat
        {
            kalimat[i] = toupper(kalimat[i]); // membuat huruf kecil a, e, i, o, u menjadi huruf kapital
        }
    }

    cout << "Kalimat dalam huruf kapital : "  << kalimat << endl; // menampilkan isi variabel kalimat yang sudah dikapitalkan huruf kecil a, e, i, o, u (jika ada pada inputan user)

    return 0; // mengakhiri eksekusi sebuah fungsi
}
