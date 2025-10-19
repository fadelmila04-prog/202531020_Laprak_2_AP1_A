#include <iostream>
#include <string>
using namespace std;

int main() { //THARIQ FADEL RAMADHAN
    string nama, nim, jurusan, kelas;
    int umur;

    cout << "======================" << endl;
    cout << "     INPUT BIODATA    " << endl;
    cout << "======================" << endl;

    cout << "Input Nama : ";
    cin >> nama;
    cout << "Input Umur : " ;
    cin >> umur;
    cout << "Input Nim : " ;
    cin >> nim;
    cout << "Input Jurusan : " ;
    cin >> jurusan;
    cout << "Input Kelas : " ;
    cin >> kelas;

    cout << "\n======================" << endl;
    cout << "       BIODATA        " << endl;
    cout << "======================" << endl;

    cout << "Nama    : " << nama << endl;
    cout << "Umur    : " << umur << endl;
    cout << "Nim     : " << nim << endl;
    cout << "Jurusan : " << jurusan << endl;
    cout << "Kelas   : " << kelas << endl;

    return 0;
}
