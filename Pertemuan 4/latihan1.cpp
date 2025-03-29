#include <iostream>
using namespace std;

main ()
{
    string kalimat;
    int i;
    system("CLS");
    cout << " Masukkan Kalimat :";
    getline (cin, kalimat);

    // a  l y a
    for (i = 0; i < kalimat.length();i++)
    {
        kalimat[i] = toupper(kalimat[i]);
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;
    return 0;
}