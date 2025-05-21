# include <iostream> // header pada C++
# include <vector> // STL yang digunkan untuk menyimpan sekumpulan data (seperti array)
using namespace std; //  digunakan agar tidak perlu lagi menulis std :: pada setiap instruksi program

main() // program utama
{
    // Vector Declaration & Initialization
    vector<string> nama_karyawan =  {" alya "," Arkan "," Dhafa "," azka "," Alamak "}; // vector merupakan wadah kosong untuk menyimpan sementara data seperti data array dan dapat menambah data baru ataupun menghapus data yang tersimpan
    
    // ascending  element of Vector
    // for (int i = 0; i < nama_karyawan.size(); i++)
    // {
    //     cout << nama_karyawan[i] << endl; // menampilkan data array nama_karyawan secara berurutan
    // }

    // for (string karyawan : nama_karyawan) // sama saja, tapi lebih simpel, menggunakan variabel  karyawan sebagai perantar array nama_karyawan
    // {
    //     cout << karyawan << endl;
    // }

    // Add data to vector
    // nama_karyawan.push_back("imam"); // menambah data string imam ke dalam vector pada posisi terakhir atau wadah yang sudah berisi data 
    // for (int i = 0; i < nama_karyawan.size(); i++)
    // {
    //     cout << nama_karyawan[i] << endl;
    // }

    // Delete from vector
    // nama_karyawan.pop_back(); // menghapus data urutan terakhir pada vector
    // nama_karyawan.erase(nama_karyawan.begin()+3); // menghapus data sesuai index atau urutan data yang ingin dihapus
    
    // for (int i = 0; i < nama_karyawan.size(); i++)
    // {
    //     cout << nama_karyawan[i] << endl; 
    // }

}
