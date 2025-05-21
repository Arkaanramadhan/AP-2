#include <iostream>
#include <string> // menyediakan tipe data string untuk memanipulasi string 
#include <vector> // STL atau wadah yang menyediakan untuk sekumpulan data seperti array
using namespace std;

struct Alamat // struct fungsi nya sama seperti array, tetapi dapat menyimpan data yang bertipe data berbeda
{
    string jalan; //variabel jalan bertipe data string
    string kota; // variabek kota bertipe  data string
    int kodePos; // variabel kodePos bertipe  data integer
}; // struct diakhiri dengan ;


struct Mahasiswa // struct fungsi nya sama seperti array, tetapi dapat menyimpan data yang bertipe data berbeda
{
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // nested struct, struct yang berada di dalam struct
};


main() // program utama
{
    system("CLS"); // untuk membersihkan layar output
    Mahasiswa mhs1; // mhs1 menjadi objek struct Mahasiswa

    // mhs1.nama = " Arkaan "; // mengassigment tiap variabel berdasarkan tipe data dengan format objek.nama_variabel_dlm_struct
    // mhs1.umur = 20;
    // mhs1.ipk = 4.00;

    // mhs1.alamat.jalan = " Jalan Kapten Muslim "; // untuk nested struct maka formatnya objek.nama_struct_dlm_struct.nama_variabel_structAlamat
    // mhs1.alamat.kota = " Medan ";
    // mhs1.alamat.kodePos = 24140;

    // cout << " Jalan = "<< mhs1.alamat.jalan << endl; // fungs keluaran
    // cout << " Kota = " << mhs1.alamat.kota  << endl;
    // cout << " KodePos= " << mhs1.alamat.kodePos  << endl;

    vector<Mahasiswa> mahasiswa; //  vector menampung data yang ada di dalam struct Mahasiswa dengan nama mahasiswa 
    int n;
    cout << " Masukkan banyak mahasiswa : ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << " mahasiswa " << i+1 << endl;
        cin.get(); // menginput data sesuai variabel dengan spasi
        cout << " masukkan nama : ";
        getline(cin, mhs1.nama); // menginput data sesuai variabel dengan spasi

        cout << " masukkan umur : ";
        cin >> mhs1.umur;

        cout << " masukkan ipk : ";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1);// data mahasiswa ke - n ditambahkan ke vector sehingga mhs1 sudah kosong dan dapat diisi oleh data mahasiswa ke n+1
    }

    for(int i = 0; i < n;  i++) // menampilkan data mahasiswa ke- n
    {
        cout << " Mahasiswa : " << i + 1 << endl; 
        cout << " Nama : " <<mahasiswa[i].nama << endl;
        cout << " Umur : " <<mahasiswa[i].umur << endl;
        cout << " IPK  : " <<mahasiswa[i].ipk << endl;
    }


}
