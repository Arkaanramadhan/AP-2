#include <iostream> // header untuk C++
#include <conio.h> // header untuk fungsi getch() dan getche()
using namespace std; // digunakan agar tidak perlu menulis std :: di depan nama - nama yang berasal dari Standard Library C++ , seperti cin, cout, dll

main () // program utama
{
   string nama; // variable nama dengan tipe string
   char kom, jenis_kelamin; // variabel kom dan jenis_kelamin bertipe data char
   int Nim; // variabel nim dengan tipe integer
   float IP; // variabel IP dengan tipe float

   cout << " Masukkan nama Anda = "; // fungsi keluaran atau output pada C++
   // cin >> nama; // fungsi inputan pada C++, tetapi tidak bisa membaca spasi
   getline(cin, nama); // fungsi inputan pada C++ agar karakter spasi bisa terbaca

   cout << " Masukkan Kom Anda = "; // fungsi keluaran atau output
   cin >> kom; // fungsi inputan atau menyimpan inputan dengan variabel kom tanpa spasi

   cout << " Masukkan Nim Anda = "; // fungsi keluaran atau output
   cin >> Nim; // fungsi inputan atau menyimpan inputan dengan variabel NIM tanpa spasi

   cout << " Masukkan Ip Anda = "; // fungsi keluaran atau output
   cin >> IP; // fungsi inputan atau menyimpan inputan dengan variabel IP tanpa spasi

   cout << "Masukkan jenis kelamin =  (L/P)"; // fungsi keluaran atau output
   jenis_kelamin = getche(); // getche digunakan agar karakter langsung tampil tanpa tekan enter.

   cout << "\n" << nama << endl; // Menampilkan hasil inputan variabel nama
   cout << kom << endl; // Menampilkan hasil inputan variabel kom
   cout << Nim << endl; // Menampilkan hasil inputan variabel Nim
   cout << IP << endl; // Menampilkan hasil inputan variabel IP
   putchar(jenis_kelamin); // Menampilkan satu karakter ke layar dengan variabel jenis_kelamin

   getch(); // karakter yang diketik ga di tampilkan di layar 





    
}

 /* ini untuk komen beberapa baris */ 
