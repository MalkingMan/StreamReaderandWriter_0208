#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string baris;
	
    // Mmebuka file dalam mode menulis.
	ofstream outfile;
    // Menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //Unlimited loop untuk menulis
    while (true)
    {
        cout <<"-";
        //Mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukkan karakter q
        
    }
    
}