#include <iostream>
using namespace std;

class ContohAkses
{
    private :
        int privateVar;

    protected :
        int protectedVar;

    public :
        int publicVar;

        // constructor
        ContohAkses()
        {
            privateVar = 1; 
            protectedVar = 2;
            publicVar = 3;
        }
    

    void tampilkansemua()
    {
        cout << "  Akses dari dalam class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;

    }

};

// kelas turunan 
class Turunan  : public ContohAkses
{
    public :
    void aksesProtected()
    {
        cout << " Akses publicVar : " << publicVar << endl;
        cout << " Akses ProtectedVar : " << protectedVar << endl;
        // cout << " Akses privateVar : " << privateVar << endl;
    }
};


main()
{
    ContohAkses obj;
    obj.tampilkansemua();

    cout << " Akses dari luar class : " << endl;
    cout << obj.publicVar << endl;
//     cout << obj.privateVar << endl; 
//     cout << obj.protectedVar << endl;

    Turunan tur;
    tur.aksesProtected();


}
