# include <iostream> // Headerpada C++
# include <string> // menyediakan tipe data string unutk memanipulasi teks (string)
# include <array> // menyediakan tipe data array yang merupakan array statis
using namespace std;//  digunakan agar tidak perlu lagi menulis std :: pada setiap instruksi program

main() // program utama
{
    // Array Declaration &  Initialization
    /* 2 cara membuat array */

    // cara  1 :  array kosong // index array harus diisi satu per satu
    // string nama[5]; // berisi 5 elemen bertipe data string
    // nama[0] = " Alya "; // membuat array index ke-0 atau posisi pertama dengan nilai string Alya
    // nama[1] = " Arkan ";
    // nama[2] = " Dhafa ";
    // nama[3] = " Azka ";
    // nama[4] = " Alamak ";

     // cara  2 :  array yang langsung diisi // lansung dibuat dalam kurung kurawal tanpa harus membuat index satu per satu, urutan penulisan data merupakan urutan index
    // string nama[5] = {" alya "," Arkan "," Dhafa "," azka "," Alamak "}
    // 

    // Ascending Element in Array // dilakukan secara manual
    // cout << nama[0] << endl; // menampilkan isi dari array nama index 0 yaitu Alya
    // cout << nama[1] << endl;
    // cout << nama[2] << endl;
    // cout << nama[3] << endl;
    // cout << nama[4] << endl;

    //  menggunakan looping // dilakukan dengan menggunakan perulangan agar lebih efisien
    // for (int i = 0 ; i <= 4; i++)
    // {
    //     cout << nama[i] << endl; // menampilkan isi data array nama hingga index 4
    // }
    

    // Multidimensional Array , contohnya seperti matriks 3 x 3 atau 2 x 3
    // 1 3 5 
    // 2 4 6

    // int matrix [2][3] = {{1, 3, 5}, {2, 4, 6}}; // matriks berukuran 2 x 3
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << matrix[i][j] << " "; // menampilkan isi matriks pada baris ke 1 kolom 1 = 1, hingga baris ke 2 kolom ke 3 = 6
    //     }
    //     cout << endl;
    // }

    // string (array of characters) // Alya // array dapat berisi char atau karakter
    // string nama = "Kiel"; // index 0 merupakan posisi pertama dari string
    // cout << nama[0] << endl; // akan menampilkan K
    // cout << nama[2] << endl; // akan menampilkan e

    // for (int i  = 0;  i < nama.length(); i++) // sama saja menampilkan char , tetapi menggunakan perulangan 
    // {
    //     cout << nama[i] << endl;
    // }

    // string s1 = "Hello";
    // string s2 = "world";

    // kita dapat melakukan operasi pada tipe data string
    /*  1. s1 = s2 */
    // s1 = s2; // variabel s1 akan memiliki isi kata World 
    // cout << "s1 = " << s1 << endl; // akan menampilkan kata World

    /*  2. s1 = s1 + s2 */
    // s1 = s1 + s2; // akan menggabungkan isi dari variabel s1 dengan variabel s2, spasi juga dihitung
    // cout << " s1 + s2 = " <<  s1 << endl; // akan menghasilkan kata HelloWorld

    /*  3. s1.length() */
    // cout << (s1 + s2).length() << endl; // akan menampilkan panjang dari gabungan string variabel s1 dan variabel s2 yaitu 10

    /*  4. s1.substr(n,m) */
    // cout << s1.substr(2,4) << endl; // artinya kita akan mulai mengambil data string dari index ke 2 dari string variabel s1 hingga 4 index selanjutnya
    // cout << (s1 + s2).substr(2,4) << endl; // artinya kita akan mulai mengambil data string dari index ke 2 dari string variabel s1+s2 hingga 4 index selanjutnya

    // Operator sizeof // digunakan untuk mengetahui ukuran dalam byte dari suatu tipe data
    // int angka = 10; 
    // cout << sizeof(angka) << endl;

    // int nilai[] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai) << endl; 

    // string s = "arkaan";
    // cout << sizeof(s) << endl;



    // Array library
    // array<float, 5> nilai = {87.5, 90, 100, 95.7, 78.3}; // adalah template class dari std :: array, untuk menggunakan ini harus terlebih dahulu membuat header #include <array>
    // cout << " Nilai = ";

    // for(int i = 0; i < nilai.size(); i++)
    // {
    //     cout << nilai[i] << " "; // akan menampilkan isi dari data array nilai bertipe data float sebanyak 5 elemen
    // }

    // for (float n : nilai) // sama saja , tetapi ini lebih simple , menggunakan n sebagai perantara array nilai
    // {
    //     cout << n << endl;
    // }

    

 }

