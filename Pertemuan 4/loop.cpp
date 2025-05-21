#include <iostream> // Header Pada C++
using namespace std; //  digunakan agar tidak perlu lagi menulis std :: pada setiap instruksi program

main () // program utama
{
    // 1. goto label, digunakan untuk instruksi memindahkan kontrol program ke lokasi tertentu yang diinginkan user dalam fungsi yang sama 
    // Hello world, Fasilkom-TI, Ilmu Komputer, IKLC
    // -> Hello  world, IKLC, Ilmu Komputer, Fasilkom-TI
    
    // a : // digunakan sebagai label atau penanda lokasi suatu program
    // cout << "Hello World" << endl; // kalimat pertama yang di tampilkan
    // goto d; // goto digunakan untuk mengarahkan ke label yang sudah ditandai untuk mengekesekusi program pada lokasi tertentu yang sudah diberi labal atau (d)
    // b :
    // cout << "Fasilkom-TI" << endl; // kalimat keempat yang ditampilkan
    // return 0;
    // c :
    // cout << "Ilmu Komputer" << endl; // kalimat ketiga yang ditampilkan
    // goto b;
    // d :
    // cout << "IKLC" << endl;// kalimat kedua yang ditampilkan
    // goto c;

    //  menampilkan bilangan genap 10 -> 2 dengan goto
    // int i = 10;
    // genap :
    // if (i % 2 == 0) // kondisi apabila sisa bagi dari i dibagi 2 hasilnya 0
    // {
    //     cout << i << " "; // akan menampilkan i yang memenuhi kondisi (angka genap)

    // } i--; // terjadi post decrement

    // if (i >= 2)
    // {
    //     goto genap; // akan berpindah ke lokasi label genap
    // }

    // 2. statement while, program hanya akan dijalankan atau melakukan perulangan apabila memenuhi kondisi tertentu

    // int i = 1;
    // while (i <= 10)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i << " "; // akan menampilkan angka 2 , 4, 6, 8, 10

    //     } i ++;

    // }

    // 3. Statement Do-while, program setidaknya berjalan atau mengeksekusi program setidaknya satu 1 kali walaupun kondisi nya tidak memenuhi syarat

    // int i = 1;
    // do 
    // {
    //     cout << i << endl; // akan menampilkan angka 1 sebanyak 1 
    // } while (i <= 0); 

    // 4. Statement for, program akan melakukan perulangan selama nilai inisialiasi yang sudah mengalami increase atau decrease memenuhi kondisi tertentu
    // for (inisialisasi; kondisi; increase )
    // for (int i = 1; i <= 10; i+=2)
    // {
    //     cout << "Hello World\n"; // akan menampilkan kalimat Hello world sebanyak 5
    // }

    // 5. Nested For, merupakan perulangan di dalam perulangan
    // ****** 5 x 5
    // for (int i = 1; i <= 5; i++) // mengatur bagian baris
    // {
    //     for (int j = 1; j <= 5; j++) //mengatur bagian kolom
    //     {
    //         cout << "* "; //akan menghasilkan ***** secara horizontal
    //     }
    //     cout << endl; // digunakan untuk menggunakan baris baru / newline sehinga terbentuk * berbentuk persegi 5 x 5
    // }

    // segitiga siku - siku , menggunakan for di dalam for
    // for (int i = 1; i <= 5; i++) // mengatur bagian baris
    // {
    //     for (int j = 1; j <= i; j++) // menagatur bagian kolom
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }



    

}
