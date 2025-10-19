#include <iostream>
using namespace std;

int main() {
    int hari, denda;

    cout << "=== PERPUSTAKAAN ===" << endl;
    cout << "\nKETERLAMBATAN PENGEMBALIAN BUKU DIKENAKAN DENDA" << endl;
    cout << "HARI KETERLAMBATAN PENGEMBALIAN BUKU : Hari ke-";
    cin >> hari; // Masukan hari telat pengembalian buku

    if (hari == 0) { 
        denda = hari * 0;
        cout << "\n--- DENDA PENGEMBALIAN BUKU ---\n" << endl;
        cout << "DENDA YANG DITERIMA PER HARI ADALAH Rp 0" << endl;
        cout << "HARI KETERLAMBATAN : Hari ke-" << hari << endl;
        cout << "DENDA YANG DIBAYAR : Rp " << denda << endl;
        cout << "TIDAK ADA DENDA YANG DIBAYAR\n" << endl;
    }
    else if (hari <= 3) {
        denda = hari * 2000;
        cout << "\n--- DENDA PENGEMBALIAN BUKU ---\n" << endl;
        cout << "DENDA YANG DITERIMA PER HARI ADALAH Rp 2000" << endl;
        cout << "HARI KETERLAMBATAN : Hari ke-" << hari << endl;
        cout << "DENDA YANG DIBAYAR : Rp " << denda << endl;
    }
    else if (hari <= 7) {
        denda = hari * 5000;
        cout << "\n--- DENDA PENGEMBALIAN BUKU ---\n" << endl;
        cout << "DENDA YANG DITERIMA PER HARI ADALAH Rp 5000" << endl;
        cout << "HARI KETERLAMBATAN : Hari ke-" << hari << endl;
        cout << "DENDA YANG DIBAYAR : Rp " << denda << endl;
    } 
    else { 
        denda = hari * 10000;
        cout << "\n--- DENDA PENGEMBALIAN BUKU ---\n" << endl;
        cout << "DENDA YANG DITERIMA PER HARI ADALAH Rp 10000" << endl;
        cout << "HARI KETERLAMBATAN : Hari ke-" << hari << endl;
        cout << "DENDA YANG DIBAYAR : Rp " << denda << endl;
    }
        return 0;
}