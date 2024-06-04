#include <iostream>
#include <exception>
//Untuk obyek exception yang akan digunakan 
#include <array>
//Untuk onjek array yang akan kita gunakan 
using namespace std;

int main()
{
    cout << "Awal Program" << endl; //Penanda 1....
    try
    {
        array<int, 3> data = { 3, 5, 7 };
        //Pesan array integer 3 elemen
        cout<<data.at(5)<<endl;
        //Memanggil array elemn ke 5
    }
    catch(exception& e)
    {
        //Penangkap menggunakan obyek exception
		cout << e.what() << endl;
		/*akan di eksekusi karena array data hanya memiliki 3 elemen*/
    }
    cout << "Baris Program yang Terakhir" << endl;
    /*Penanda 2: bahea prgram berjalan tanpa berhenti
     meskipun terjadi kesalahan*/
     return 0;

}
