#include <iostream> // Header Pada C++
using namespace std; // digunakan agar tidak perlu lagi menulis std :: pada setiap instruksi program

main () // program utama
{
        string password, sandi, expected = ""; // password, sandi, expected bertipe data string
    
        cout << "Masukkan kata password : "; // fungsi keluaran menampilkan kalimat
        cin >> password; // fungsi masukkan disimpan pada variabel password
    
        cout << "Masukkan kata sandi : "; // fungsi keluaran menampilkan kalimat
        cin >> sandi; // fungsi masukkan disimpan pada variabel password
    
        // Membuat string "expected" berdasarkan pola tertentu
        for (int i = 0; i < password.length(); i++) {
            expected += password.substr(0, i + 1); // password.substr() digunakan untuk mengambil sebagian teks atau huruf dengan bentuk dasar nya  password.substr(posisi awal, jumlah_karakter)
                // misalnya passwordnya ay, maka pada perulangan ke-1 expected = password.substr(0,0+1) , sehingga variabel expected akan menyimpan string a.
                // kemudian pada perulangan ke-2 atau terakhir expected = password.substr(0,1+1) , sehingga variabel expected akan menyimpan a + ay = aay.
        }
    
        // Mengecek apakah input kedua sesuai dengan pola yang diharapkan
        if (expected == sandi) // Kondisi apabila sandi yang dimasukkan user sesuai dengan variabel expected yang mengalami operasi pada perulangan
        {
            cout << "Tulisan agen benar" << endl; // menampilkan tulisan " Tulisan agen benar"
        } else // kondisi selain dari yang di atas 
        {
            cout << "Tulisan agen salah" << endl; // menampilkan tulisan " Tulisan agen salah"
        }
    
        return 0;  // mengakhiri eksekusi sebuah fungsi
    } 
