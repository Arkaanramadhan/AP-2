# include <iostream>
using namespace std;

main()
{
    int nilai;
    system("CLS");

    cout << "Masukkan Nilai : ";
    cin >> nilai;

    // if statement

    // if (nilai <= 65)
    // {
    //     cout << "Anda Tidak Lulus";
    // }


    // if -  else staement

    // if (nilai <= 65)
    // {
    //     cout << "Anda Tidak Lulus";
    // }
    // else 
    // {
    //     cout << "Anda Lulus";
    // }

    // if - else - if statemnet

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

    // nested if

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

    // switch case

    // switch (nilai)
    // {
    //     case 1 : cout << "senin";break;
    //     case 2 : cout << "selasa";break;
    //     case 3 : cout << "rabu";break;
    //     case 4 : cout << "kamis";break;
    //     case 5 : cout << "jumat";break;
    //     case 6 : cout << "sabtu";break;
    //     case 7 : cout << "minggu";break;
    //     default : cout << "Inputan tidak valid";break; // selain dari pernyataan yang ada

    // }

    // switch range
    // switch (nilai)
    // {
    //     case 85 ... 100 : cout << " A "; break;
    //     case 80 ... 84 : cout << " B+ "; break;
    //     case 75 ... 79 : cout << " B "; break;
    //     case 70 ... 74 : cout << " C+ "; break;
    //     case 65 ... 69 : cout << " C "; break;
    //     case 60 ... 64 : cout << " D "; break;
    //     default : cout << " E "; break;
    // }
    
    // Ternary Operator

    string checknum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    cout << nilai << " tuh bilangan " << checknum << " sih " << endl;
}