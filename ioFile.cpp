#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string baris;

    // membuat objek output file stream
    ofstream outfile;
    // membuka file untuk ditulisi
    outfile.open ("contohfileku.txt");

    cout << ">= Menulis file, \'q\' keluar" << endl;

    // unlimited loop untuk menulis
    while (true) {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika anda memasukan karakter q
        if (baris == "q") break;
        // menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    // selesai dalam menulis sekarang tutup filenya
    outfile.close();

    //membuat objek input dalam file stream
    ifstream infile;
}