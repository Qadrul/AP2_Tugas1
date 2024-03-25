#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string nama;
    int golongan, jumlah_anak;
    const int gaji_golongan[] = {5000000, 3000000, 2500000};
    const float pajak = 0.05;
    const int tambahan_anak_dua = 500000;
    const int tambahan_anak_lebih_dari_dua = 750000;

    cout << "Masukkan nama anda: ";
    getline(cin, nama);
    cout << "Masukkan golongan (1,2,3): ";
    cin >> golongan;
    cout << "Jumlah anak: ";
    cin >> jumlah_anak;

    int gaji_pokok = gaji_golongan[golongan - 1];

    int tambahan_anak = 0;
    if (jumlah_anak == 1 || jumlah_anak == 2)
        tambahan_anak = jumlah_anak * tambahan_anak_dua;
    else if (jumlah_anak > 2)
        tambahan_anak = jumlah_anak * tambahan_anak_lebih_dari_dua;

    float total_pajak = pajak * gaji_pokok;

    int gaji_total = gaji_pokok + tambahan_anak - total_pajak;

    cout << "Gaji total untuk " << nama << " adalah: ";
    cout << "Rp. "<< gaji_total ;

    return 0;
}
