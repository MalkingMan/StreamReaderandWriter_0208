#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string baris;
    string NamaFile;

    cout << "Masukkan Nama File :";
    cin >> NamaFile;
	
    // Mmebuka file dalam mode menulis.
	ofstream outfile;
    // Menunjuk ke sebuah nama file
    outfile.open(NamaFile +".txt", ios::out);

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //Unlimited loop untuk menulis
    while (true)
    {
        cout <<"-";
        //Mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //Loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q") break;
		//Menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
    }
     //selesai dalam menulis sekarang tutup filenya
    outfile.close();

    //Membuka file dalam mode membaca
    ifstream infile;
    //Menunjuk ke sebuah file
	infile.open(NamaFile + ".txt", ios::in);

    cout << endl << ">= Mmebuka dan membaca file" << endl;
    //Jika file ada maka
    if (infile.is_open())
    {
        //Melakukan perulangan setiap baris
		while (getline(infile, baris))
        {
            //Dan tampilkan disini
            cout << baris << '/n';
        }
        //Tutup file tersebut setelah selesai
        infile.close();
    }
    //Jika tidak ditemukan file maka akan menampilkan ini
	else cout << "Unable to open file";
	return 0;
}