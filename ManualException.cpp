#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Selamat belajar di prodi TI UMY" <<endl;
        throw 0.5;
        //Melempakran sebuah integer maka
        cout << "Pertanyaan tidak akan dieksekusi"<< endl;
    }
    catch(int a)
    {
        //Blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch (...)
    {
        /*Jika selain integer maka blok ini akan dieksekusi*/
        cout << "Default pengecualian dieksekusi" << endl;
    }
    return 0;
    
}