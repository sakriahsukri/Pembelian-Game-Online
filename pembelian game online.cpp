#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int pilihan, jumlah;
    string namaGame;
    double harga, total;

    cout << "=====================================\n";
    cout << "   PROGRAM PEMBELIAN GAME ONLINE\n";
    cout << "=====================================\n";
    cout << "Daftar Game:\n";
    cout << "1. Mobile Legends   - Rp50.000\n";
    cout << "2. Free Fire        - Rp45.000\n";
    cout << "3. PUBG Mobile      - Rp60.000\n";
    cout << "4. Valorant         - Rp100.000\n";
    cout << "5. Genshin Impact   - Rp150.000\n";
    cout << "=====================================\n";

    cout << "Pilih game (1-5): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            namaGame = "Mobile Legends";
            harga = 50000;
            break;
        case 2:
            namaGame = "Free Fire";
            harga = 45000;
            break;
        case 3:
            namaGame = "PUBG Mobile";
            harga = 60000;
            break;
        case 4:
            namaGame = "Valorant";
            harga = 100000;
            break;
        case 5:
            namaGame = "Genshin Impact";
            harga = 150000;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            return 0;
    }

    cout << "Jumlah pembelian: ";
    cin >> jumlah;

    total = harga * jumlah;

    cout << "\n========== STRUK PEMBELIAN ==========\n";
    cout << "Nama Game     : " << namaGame << endl;
    cout << "Harga         : Rp" << fixed << setprecision(0) << harga << endl;
    cout << "Jumlah        : " << jumlah << endl;
    cout << "-------------------------------------\n";
    cout << "Total Bayar   : Rp" << total << endl;
    cout << "=====================================\n";
    cout << "Terima kasih telah melakukan pembelian!\n";

    return 0;
}
