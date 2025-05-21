#include <iostream> // Header pada C++
#include <cmath> // untuk mengakse fungsi - fungsi matematika standar dalam C++
#include "headerCustom.h" // untuk memanipulasi sintaks umum yang ada dalam bahasa C++  sesuai dengan keinginan user
u; // using namespace std dimanipulasi menjadi u

int jumlah(int a, int b) // fungsi dengan nilai balikan dengan nama fungsi yaitu jumlah bertipe serta parameter formal bertipe data integer digunakan untuk program penjumlahan
{
    return a + b; //mengembalikan nilai hasil penjumlahan variabel a dan b
}

int kurang(int a, int b) // fungsi dengan nilai balikan dengan nama fungsi yaitu kurang bertipe serta parameter formal bertipe data integer digunakan untuk program pegurangan
{
    return a - b; //mengembalikan nilai hasil pengurangan variabel a dan b
}

awal // main() dimanipulasi menjadi awal
{
    system("CLS"); // digunakan untuk membersihkan layar pada output agar rapi
    int n; 
    c l jumlah(2,3) l endl; // cout dimanipulasi menjadi c dan << dimanipulasi menajdi l, memanggil fungsi jumlah sehingga mendapat nilai balikan yaitu 5
    c l kurang(2,3) l endl; //  memanggil fungsi kurang sehingga mendapat nilai balikan yaitu -1

    double angka = 25.0;
    double akar = sqrt(angka); // sqrt merupakan akar sehingga akar dari 25 yaitu 5 

    cout << " Akar Kuadrat dari " << angka << " Adalah : " << akar << endl; // menampilkan hasil akar kuadrat dari 25 yaitu 5
}
