#include <iostream>
using namespace std;

int main() { 
    int nominal, admin = 2500, bonus, total;

    cout << "=== PEMBELIAN TOKEN LISTRIK PLN ===" << endl;
    cout << "Masukkan nominal pembelian: Rp ";
    cin >> nominal; 

    if (nominal < 20000) { 
        cout << "Nominal terlalu kecil! Minimal Rp 20.000\n";
    } 
    else if (nominal >= 100000) { 
        bonus = 5000;
        total = nominal - admin + bonus;
        cout << "--- RINCIAN PEMBELIAN ---\n" << endl;
        cout << "Nominal: Rp " << nominal << endl;
        cout << "Biaya Admin: Rp " << admin << endl;
        cout << "Bonus: Rp " << bonus << endl;
        cout << "Token yang didapat: Rp " << total << endl;
    } 
    else if (nominal >= 50000) { 
        bonus = 2000;
        total = nominal - admin + bonus;
        cout << "--- RINCIAN PEMBELIAN ---\n" << endl;
        cout << "Nominal: Rp " << nominal << endl;
        cout << "Biaya Admin: Rp " << admin << endl;
        cout << "Bonus: Rp " << bonus << endl;
        cout << "Token yang didapat: Rp " << total << endl;
    } 
    else if (nominal >= 20000) { 
        bonus = 0;
        total = nominal - admin + bonus;
        cout << "--- RINCIAN PEMBELIAN ---\n" << endl;
        cout << "Nominal: Rp " << nominal << endl;
        cout << "Biaya Admin: Rp " << admin << endl;
        cout << "Bonus: Rp " << bonus << endl;
        cout << "Token yang didapat: Rp " << total << endl;
    } 
    else { 
        bonus = 0;
        total = nominal - admin + bonus;
        cout << "--- RINCIAN PEMBELIAN ---\n" << endl;
        cout << "Nominal: Rp " << nominal << endl;
        cout << "Biaya Admin: Rp " << admin << endl;
        cout << "Bonus: Rp " << bonus << endl;
        cout << "Token yang didapat: Rp " << total << endl;
    }

    cout << "-------------------------------" << endl;
}