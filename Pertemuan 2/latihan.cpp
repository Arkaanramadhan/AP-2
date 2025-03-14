#include <iostream>
#include <conio.h> 
using namespace std;

int main()
{ 
    float r, volume, lp;
    const float phi = 3.14; 

    cout << " \n Masukkan jari-jari =  ";
    cin >> r;

    volume = ((float)4/3) * phi * r * r * r ;
    lp = 4 * phi * r * r;

    cout << " \nVolume = " << volume;
    cout << " \nLuas Permukaan = " << lp;



}