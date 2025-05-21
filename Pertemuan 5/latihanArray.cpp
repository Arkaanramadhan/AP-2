# include <iostream> // header pada C++
using namespace std; //  digunakan agar tidak perlu lagi menulis std :: pada setiap instruksi program

main() // program utama
{
    // Penjumlahan matriks 2 x 2

    int matriks1[2][2]; // variabel matriks1 brukuran 2 x 2 bertipe data integer
    int matriks2[2][2]; // variabel matriks2 brukuran 2 x 2 bertipe data integer
    int hasil[2][2]; // variabel hasil1 brukuran 2 x 2 bertipe data integer

    cout << " Matriks 1 : " << endl; // data  nilai pada variabel matriks1
    for (int i = 0; i < 2; i++) // mengatur bagian baris
    {
        for (int j = 0; j < 2; j++) // mengatur bagian kolom
        {
            cout << "Masukkan elemen baris " << i + 1 << " Kolom "<< j + 1 << " : ";
            cin >> matriks1[i][j]; // user menginput nilai angka pada baris ke 1 kolom ke 1 hingga baris 2 kolom 2
        }

    }

    cout << " Matriks 2 : " << endl; // data  nilai pada variabel matriks2
    for (int i = 0; i < 2;i++) // mengatur bagian baris
    {
        for (int j = 0; j < 2; j++) // mengatur bagian kolom
        {
            cout << "Masukkan elemen baris " << i + 1 << " Kolom "<< j + 1 << " : ";
            cin >> matriks2[i][j]; // user menginput nilai angka pada baris ke 1 kolom ke 1 hingga baris 2 kolom 2
        }
        
    }

    cout << " Hasil Penjumlahan " << endl; // data hasil penjumlahan anggota matriks1 dan matriks2
    for (int i = 0; i < 2;i++) // mengatur bagian baris
    {
        for (int j = 0; j < 2; j++) // mengatur bagian kolom
        {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j]; // menjumlahkan hasil inputan matriks1 dan matriks2
            cout << hasil[i][j] << " "; // menampilkan hasil penjumlahan matriks1 dan matriks2 dalam bentuk matriks dimulai dari data pada baris ke 1 kolom ke 1 hingga baris 2 kolom 2
        }
        cout << endl; // agar dapat membentuk seperti tampilan matriks pada umummnya
    }
}
