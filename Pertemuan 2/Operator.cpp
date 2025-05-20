#include <iostream> // header untuk C++
#include <conio.h> // header untuk fungsi getch() dan getche()
using namespace std; // digunakan agar tidak perlu menulis std :: di depan nama - nama yang berasal dari Standard Library C++ , seperti cin, cout, dll

int main() // program utama
{
    int a, b; // variabel a dan b dengan tipe data integer
    system("CLS"); //  untuk membersihkan layar pada output agar tidak berantakan

    // 1. assignment operator
    a = 3; // memberi nilai 3 pada variabel a
    b = 5; // memberi nilai 5 pada variabel b

    // 2. Operator aritmatika, operator yang ada dalam matematika

    // int tambah = a + b; // menjumlahkan nilai a dan b pada variabel tambah dgn tipe data integer
    // int kurang = a -b; // mengurangi nilai  a dengan b pada variabel kurang dgn tipe  data integer
    // int kali = a * b; // mengkalikan nilai  a dan b pada variabel kali dgn tipe data int
    // float bagi = (float)a / b; // type casting : Mengubah tipe data dari sebuah variabel
    // int modulo  =  a % b; // digunakan untuk menghasilkan sisa bagi antara pembagian a bagi b

    // cout << "\nHasil Penjumlahan = "<< tambah; // menampilkan hasil variabel tambah
    // cout << "\nHasil Pengurangan = "<< kurang; // menampilkan hasil variabel kurang
    // cout << "\nHasil Perkalian   = "<< kali; // menampilkan hasil variabel kali
    // cout << "\nHasil Pembagian   = "<< bagi; // menampilkan hasil variabel bagi
    // cout << "\nHasil Modulo      = "<< modulo; menampilkan hasil variabel modulo

    // 3.  Relational Operator , membandingkan dua nilai dan menghasilkan nilai boolean (false or true)

    // cout << (a==b) << endl; // akan menampilkan false karena a tidak sama dengan b
    // cout << (a<b) << endl; // akan menampilkan true karena a = 3 dan b = 5
    // cout << (a<=b) << endl; // akan menampilkan true karena a= 3 dan b = 5
    // cout << (a>b) << endl; // akan menghasilkan false karena a = 3 dan b = 5
    // cout << (a>=b) << endl; // akan menghasilkan false karena a = 3 dan b = 5
    // cout << (a!=b) << endl; // akan menampilkan true karena a tidak sama dengan b


    // 4. logical operator (&&, ||, !)

    // And(&&) bernilai true apabila kedua nilai kebenarannya true, selain dari itu false
    // cout << (true && true)<< endl; // menampilkan true
    // cout << (true && false)<< endl; // menampilkan false
    // cout << (false && false)<< endl; // menampilkan false
    // cout << (false && true)<< endl; // menampilkan false

    // Or(||) bernilai false apabila kedua nilai kebenarannya false, selain dari itu true
    // cout << (true || true)<< endl; // menampilkan true
    // cout << (true || false)<< endl; // menampilkan true
    // cout << (false || false)<< endl; // menampilkan false
    // cout << (false || true)<< endl; // menampilkan true

    // not(!) merupakan kebalikan dari suatu nilai kebenaran
    // cout << (! true)<< endl; // menampilkan false
    // cout << (! false)<< endl; // menampilkan true
    
    // 5. Bitwise Operator (&, /, ^, ~, >>, <<)--> biner, merupakan operator dalam angka biner (0 dan 1) 
    // cout << ( 5 & 7 ) << endl; // meng-And kan biner angka 5 dan 7
    // cout << ( 5 \ 7 ) << endl; // meng-OR kan biner angka 5 san 7
    // cout << ( 5 ^ 7 ) << endl; // meng-XOR kan biner angka 5 dan 7
    // cout << ( ~7 ) << endl; // kebalikan nilai kebenaran dari angka biner 7
    // cout << ( 7 >> 2 ) << endl; // menggeser 2 bit ke kanan biner angka 7
    // cout << ( 7 << 2 ) << endl; // menggeser 2 bit ke kiri biner angkat 7
   
    // 6. shorthand

    // a += 7; // a =  a + 7
    // cout << a << endl; // menampilkan hasil a setelah penjumlahan

    // a -= 7; // a =  a - 7
    // cout << a << endl; // menampilkan hasil a setelah pengurangan
    
    // a *= 7; // a =  a * 7
    // cout << a << endl; //menampilkan hasil a setelah perkalian
    
    // a /= 7; // a =  a / 7
    // cout << a << endl; // menampilkan hasil a setelah pembagian

    // 7. Decrement , Increment

    // Pre Increment , meningkatkan nilai variabel sebelum digunakan
    // cout << a << endl; // menampilkan nilai awal a
    // cout << ++a << endl; // menampilkan nilai a yang sudah ditambahkan
    
    // cout << b << endl; // menampilkan nilai awal b
    // cout << ++b << endl; // menampilkan nilai b yang sudah ditambahkan

    // Post increment , meningkatkan nilai variabel setelah digunkanan 
    //  cout << a << endl; // menampilkan nilai awal a
    //  cout << a++ << endl; // menampilkan nilai awal a
    //  cout << a << endl; // menampilkan nilai a yang sudah ditambahkan
    
    //  cout << b << endl; // menampilkan nilai awal b
    //  cout << b++ << endl; // menampilkan nilai awal b
    //  cout << b << endl; // menampilkan nilai b yang sudah ditambahkan

    // Pre Decrement , mengurangi nilai variabel sebelum digunakan
    // cout << a << endl; // menampilkan nilai awal a
    // cout << --a << endl; // menampilkan nilai a yang sudah dikurangi
    
    // cout << b << endl; // menampilkan nilai awal b 
    // cout << --b << endl; // menampilkan nilai b yang sudah dikurangi

    // Post Decrement, mengurangi nilai variabel setelah digunakan
    //   cout << a << endl; // menampilkan nilai awal a
    //   cout << a-- << endl; // menampilkan nilai awal a
    //   cout << a << endl; // menampilkan nilai a yang sudah dikurangi
    
    //   cout << b << endl; // menampilkan nilai awal b
    //   cout << b-- << endl; //menampilkan nilai awal b
    //   cout << b << endl; // menampilkan nilai b yang sudah dikurangi

    
    
}
