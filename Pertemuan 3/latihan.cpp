# include <iostream> // Header pada C++
using namespace std; // // digunakan agar tidak perlu menulis std :: di depan nama - nama yang berasal dari Standard Library C++ , seperti cin, cout, dll

main() // program utama
{
    int nilai; // variabel nilai bertipe data integer
    system("CLS"); // digunakan untukmembersihkan layar pada output agar tidak berantakan atau rapi

    cout << "Masukkan Nilai : "; // menampilkan kalimat " Masukkan Nilai : "
    cin >> nilai; // fungsi masukan atau inputan yang disimpan pada variabel nilai

    if (nilai % 5 == 0) // syarat atau kondisi apabila hasil dari inputan variabel nilai dimodkan dengan 5 menghasilkan 0
    {
        cout << nilai << " kelipatan 5"; // jika memenuhi syarat maka akan menampilkan nilai variabel nilai kelipatan 5
    }
    else if (nilai % 10 == 0) // syarat atau kondisi apabila hasil dari inputan variabel nilai dimodkan dengan 10 menghasilkan 0
    {
        cout << nilai << " kelipatan 10"; // jika memenuhi syarat maka akan menampilkan nilai variabel nilai kelipatan 10
    }
    else // kondisi selain dari kondisi atau syarat yang ada di atas
    {
        cout << nilai << " Bukan Kelipatan 5 atau 10"; // jika  memnuhi kondisi tersebut makan akan menampilkan nilai variabel nilai bukan kelipatan 5 atau 10
    }

}
