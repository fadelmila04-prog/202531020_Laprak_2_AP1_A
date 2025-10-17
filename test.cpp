#include <iostream>
using namespace std;

int main() { 
    int hari, denda;

    cout << "=== PERPUSTAKAAN ===\n" << endl;
    cout << "Hari terlambat pengembalian buku : ";
    cin >> denda; 
    if (hari <= 0) { 
        cout << "Tidak ada denda yang dibayar\n";
    } 
    else if (hari <= 3) { 
        denda = 2000/hari;
        cout << "--- DENDA PENGEMBALIAN BUKU ---\n" << endl;
        cout << "Hari: Rp " << hari << endl;
        cout << "denda yang dibayar: Rp " << denda << endl;
    } 
    else if (hari <= 7) {
        denda = 5000/hari;
        cout << "--- DENDA PENGEMBALIAN BUKU ---\n" << endl;
        cout << "Hari: Rp " << hari << endl;
        cout << "denda yang dibayar: Rp " << denda << endl;
    } 
    else if (hari <= 8) {
        denda = 10000/hari;
        cout << "--- DENDA PENGEMBALIAN BUKU ---\n" << endl;
        cout << "Hari: Rp " << hari << endl;
        cout << "denda yang dibayar: Rp " << denda << endl;
    }
        else if (hari = 0) {
        denda = 0/hari;
        cout << "--- DENDA PENGEMBALIAN BUKU ---\n" << endl;
        cout << "Hari: Rp " << hari << endl;
        cout << "denda yang dibayar: Rp " << denda << endl;
    }
}