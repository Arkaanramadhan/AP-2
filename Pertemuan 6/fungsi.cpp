#include <iostream>
using namespace std;

// fungsi tanpa nilai balikan 
void tampilkanPesan()
{
    cout << "==== SELAMAT DATANG DI AP 2 ===="<< endl;
}

// fungsi dengan nilai balikan
int tambah(int a, int b)
{
    return a + b;
}

// fungsi overload
int kali(int a, int b)
{
    return a * b;
}

double kali(double a, double b)
{
    return a * b;
}

// fungsi rekursif 
int faktorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * faktorial(n-1);
    }
}


main()
{
    system("CLS");

    // menggunakan fungsi tanpa nilai balikan 
    tampilkanPesan();

    int x = 5;
    int y = 3;
    // menggunakan fungsi dengan nilai balikan 
    int hasilTambah = tambah(x,y);
    cout << "Hasil penjumlahan = "<< hasilTambah << endl;

    // menggunakan fungsi overload
    int hasilkaliint = kali(x,y);
    double hasilkalidouble = kali(5.5,2.0);

    cout << " Hasil perkalian (int) : " << hasilkaliint << endl;
    cout << " Hasil perkalian (double) : " << hasilkalidouble << endl;

    // menggunakan fungsi rekursif
    int angka = 5;
    cout << "Faktorial dari " << angka << " Adalah : "<< faktorial(angka);
    
}