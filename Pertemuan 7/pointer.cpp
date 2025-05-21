#include <iostream>
using namespace std;


    // ringkasan saya
    // pointer -> int *ayam = 20 
    // ketika dipanggil dalam bentuk variabel ayam saja, maka output akan menghasilkan alamat dari angka 20.
    // namun ketika dipanggil dalam bentuk *ayam, maka output akan menghasilkan 20.

    // data biasa -> int ayam = 20
    // ketika dipanggil dalam bentuk variabel ayam saja, maka output akan menghasilkan 20.
    // namun ketika dipanggil dalam bentuk &ayam, maka output akan menghasilkan alamat dari angka 20.

void penjumlahan(int a, int b)
{
    cout << a + b << endl;
}

void penjumlahanPointer(int *a, int *b) // parameter fapat berupa  pointer 
{
    *a += *b;
    cout << *a << endl;
}

main()
{
    system("CLS");

    // pointer Declaration
    int number = 35;
    int *pointer_number = &number;

    // cout << " Isi variabel number = " << number << endl;
    // cout << " Alamat dari memori variabel number = " << &number << endl;
    // cout << " isi variabel pointer_number = " << pointer_number << endl;
    // cout  << " isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << " Alamat memori variabel pointer_number = " << &pointer_number << endl;

    // pointer operation 
    // *pointer_number = 25;

    // cout << " Isi variabel number = " << number << endl;
    // cout << " Alamat dari memori variabel number = " << &number << endl;
    // cout << " isi variabel pointer_number = " << pointer_number << endl;
    // cout  << " isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << " Alamat memori variabel pointer_number = " << &pointer_number << endl;

    // pointer in array, pointer dapat digunakan untuk menunjuk alamat atau index data dalam array
    int num[] = {1,2,3,4,5};
    int *pointer_num = num;
    // cout << " Isi variabel num = " << num[0] << endl;
    // cout << " Alamat dari memori variabel num = " << &num[0] << endl;
    // cout << " isi variabel pointer_num = " << pointer_num << endl;
    // cout  << " isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << " Alamat memori variabel pointer_num = " << &pointer_num << endl;

    // *pointer_num += 5; // pointer juga dapat melakukan operasi baik itu alamat memori maupun isi alamat tersebut
    // cout << " Isi variabel num = " << num << endl;
    // cout << " Alamat dari memori variabel num = " << &num << endl;
    // cout << " isi variabel pointer_num = " << pointer_num << endl;
    // cout  << " isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << " Alamat memori variabel pointer_num = " << &pointer_num << endl;

    // pointer in parameter , pointer dapat menjadi parameter formal maupun aktual
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1,num2);
    // cout << num1 << endl;
    // cout << num2 << endl;
    // penjumlahanPointer(&num1,&num2);
    // cout << num1 << endl;
    // cout << num2 << endl;
    
    // pointer in pointer, pointer yang menyimpan alamat dari pointer lain 
    // int score = 4;
    // int *pointer_score = &score;
    // int **ptr_pointer_score = &pointer_score; // pointer in pointer
    // cout << " Isi variabel score = " << score << " dan alamat memori nya = " << &score << endl;
    // cout << " Isi variabel pointer_score  = " << pointer_score << " dan isi variabel yang ditunjuk oleh pointer_score = " << *pointer_score << " alamat memori pointer_score = " << &pointer_score << endl;
    // cout << " Isi variabel ptr_pointer_score  = " << ptr_pointer_score << " dan isi variabel yang ditunjuk oleh ptr_pointer_score = " << **ptr_pointer_score << " alamat memori ptr_pointer_score = " << &ptr_pointer_score << endl;

    // Dynamic Pointer, pointer digunakan untuk mengakses memori yang dialokasikan secara dinamis
    int *ptr = new int;
    *ptr = 30;
    cout << " Isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;

    delete ptr;
    cout << " Isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;

}
