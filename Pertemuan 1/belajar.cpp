#include <iostream> // header untuk C++
#include <conio.h> // header untuk fungsi getch() dan getche()
using namespace std;

main ()
{
   string nama;
   char kom, jenis_kelamin;
   int Nim;
   float IP;

   cout << " Masukkan nama Anda = "; 
   // cin >> nama;
   getline(cin, nama); // agar karakter spasi bisa terbaca

   cout << " Masukkan Kom Anda = "; 
   cin >> kom;

   cout << " Masukkan Nim Anda = "; 
   cin >> Nim;

   cout << " Masukkan Ip Anda = "; 
   cin >> IP;

   cout << "Masukkan jenis kelamin =  (L/P)";
   jenis_kelamin = getche(); // getche digunakan agar karakter langsung tampil tanpa tekan enter.

   cout << "\n" << nama << endl;
   cout << kom << endl;
   cout << Nim << endl;
   cout << IP << endl;
   putchar(jenis_kelamin);

   getch(); // karakter yang diketik ga di tampilkan di layar 





    
}

 /* ini untuk komen beberapa baris */