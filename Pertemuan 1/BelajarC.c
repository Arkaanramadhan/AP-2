#include <stdio.h> // header untuk bahasa C
#include <conio.h> // header yang menyediakan fungsi - fungsi untuk manipulasi output / input, Misalnya gets(), getchar(), dll.

int main() // program utama 
{
    char nama[50];    // variabel nama dengan tipe data char max 50
    int nim;         // variabel nim dengan tipe data integer
    char kom[2];     //variabel kom dengan tipe data char max 2
    float ip;        // variabel ip dengan tipe data float (bilangan desimal)

    printf("Hello World\n"); // printf digunakan untuk fungsi keluaran pada bahasa C

    printf("Masukkan nama : "); // menampilkan kalimat " Masukkan nama : "
    gets(nama); // get string dengan variabel nama untuk tempat menyimpan inputan satu baris teks (termasuk spasi)

    printf("Masukkan nim : "); // menampilkan kalimat " Masukkan nim : "
    scanf("%d", &nim); // scanf merupakan fungsi masukan /inputan pada C

    getchar(); // membaca satu karakter dari inputan

    printf("Masukkan kom : "); // menampilkan kalimat " Masukkan kom : "
    gets(kom); // get string dengan variabel kom untuk tempat menyimpan inputan satu baris teks (termasuk spasi)

    printf("Masukkan ip : "); // menampilkan kalimat " Masukkan ip : "
    scanf("%f", &ip); //  mengambil inputan dengan tipe data float dengan nama variabel ip

    /* Untuk Output */
    printf("Nama : "); // menampilkan kalimat " Nama : "
    puts(nama); // menampilkan inputan variabel nama ke layar diikuti dengan new line

    printf("NIM : %d\n", nim); // menampilkan kalimat " Nim : " beserta hasil inputan pada variabel nim

    printf("KOM : "); // menampilkan kalimat " KOM : "
    puts(kom); // menampilkan inputan variabel kom ke layar diikuti dengan new line
    printf("IP : %f\n", ip); // menampilkan kalimat " IP : " beserta hasil inputan pada variabel ip

    printf("press any button to continue...");
    getch(); // membaca satu karakter dari keyboard tanpa menampilkan ke layar

}
