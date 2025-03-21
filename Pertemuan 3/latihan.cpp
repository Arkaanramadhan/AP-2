# include <iostream>
using namespace std;

main()
{
    int nilai;
    system("CLS");

    cout << "Masukkan Nilai : ";
    cin >> nilai;

    if (nilai % 5 == 0)
    {
        cout << nilai << " kelipatan 5";
    }
    else if (nilai % 10 == 0)
    {
        cout << nilai << " kelipatan 10";
    }
    else 
    {
        cout << nilai << " Bukan Kelipatan 5 atau 10";
    }

}