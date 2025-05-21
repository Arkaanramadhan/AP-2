# include <iostream> // header pada C++
using namespace std; // // digunakan agar tidak perlu menulis std :: di depan nama - nama yang berasal dari Standard Library C++ , seperti cin, cout, dll

main() // program utama
{
    int nilai; // varibel nilai bertipe data integer
    system("CLS"); // digunakan untuk membersihkan layar pada output agar rapi

    cout << "Masukkan Nilai : "; // fungsi keluaran atau ouput
    cin >> nilai; // fungsi masukkan atau inputan pada variabel nilai

    // if statement, dipakai untuk satu kondisi saja, apabila di luar kondisi tersebut maka tidak menjalankan program apapun

    // if (nilai <= 65)
    // {
    //     cout << "Anda Tidak Lulus";
    // }


    // if -  else staement, dipakai untuk satu kondisi saja, apabila di luar kondisi tersebut maka akan menjalankan program tertentu

    // if (nilai <= 65)
    // {
    //     cout << "Anda Tidak Lulus";
    // }
    // else 
    // {
    //     cout << "Anda Lulus";
    // }

    // if - else - if statemnet, diapakai untuk lebih dari satu kondisi

    // if (nilai == 100)
    // {
    //     cout << "Anda Keceh";
    // }
    // else if(nilai <= 65)
    // {
    //     cout << "Anda tidak lulus";
    // }
    // else 
    // {
    //     cout << "anda lulus";
    // }

    // nested if , merupakan kondisi atau syarat di dalam kondisi atau syarat tertentu

    // if (nilai <= 65)
    // {
    //     cout << "Anda tidak lulus ";
    // }
    // else  
    // {
    //     if (nilai == 100)
    //     {
    //         cout << "Anda lulus dan Anda hebat";
    //     }
    //     else 
    //     {
    //         cout << "anda lulus";
    //     }
    // }

    // switch case, digunakan untuk program yang membutuhkan banyak kondisi ,tetapi dalam bentuk yang lebih singkat dan efisien.
    // swtich case dapat berupa nilai(integer) atau string
    
    // switch (nilai)
    // {
    //     case 1 : cout << "senin";break; // diakhiri dengan break agar melanjutkan program yang berada di setelah switch case ini
    //     case 2 : cout << "selasa";break;
    //     case 3 : cout << "rabu";break;
    //     case 4 : cout << "kamis";break;
    //     case 5 : cout << "jumat";break;
    //     case 6 : cout << "sabtu";break;
    //     case 7 : cout << "minggu";break;
    //     default : cout << "Inputan tidak valid";break; // selain dari pernyataan yang ada

    // }

    // switch range, digunakan untuk program yang membutuhkan banyak kondisi ,tetapi dalam bentuk yang lebih singkat dan efisien.
    // switch range dalam bbentuk range atau rentang suatu angka atau nilai
    
    // switch (nilai)
    // {
    //     case 85 ... 100 : cout << " A "; break; // diakhiri dengan break agar melanjutkan program yang berada di setelah switch range ini
    //     case 80 ... 84 : cout << " B+ "; break;
    //     case 75 ... 79 : cout << " B "; break;
    //     case 70 ... 74 : cout << " C+ "; break;
    //     case 65 ... 69 : cout << " C "; break;
    //     case 60 ... 64 : cout << " D "; break;
    //     default : cout << " E "; break;
    // }
    
    // Ternary Operator, operator kondisional untuk mengevaluasi sebuah kondisi dan mengembalikan salah satu dari dua nilai berdasarkan hasil evaluasi

    string checknum = (nilai % 2 == 0) ? "Genap" : "Ganjil"; // apabila hasil dari nilai mod 2 == 0 true, maka variabel checknum akan menyimpan string genap
    // apabila hasil dari nilai mod 2 == 0 false, maka variabel checknum akan menyimpan string ganjil
    cout << nilai << " tuh bilangan " << checknum << " sih " << endl;
}
