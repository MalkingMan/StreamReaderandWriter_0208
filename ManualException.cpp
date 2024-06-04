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
        std::cerr << e.what() << '\n';
    }
    
}