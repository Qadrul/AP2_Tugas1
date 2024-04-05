#include <iostream>

using namespace std;

main() {
    float berat, tinggi, bmi;
  
    cout << "Masukkan berat badan (kg):";
    cin >> berat;

    cout << "Masukkan tinggi badan (M):";
    cin >> tinggi;

    bmi = berat / (tinggi * tinggi);
  
    cout << "BMI Anda: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Kategori: Berat badan Kurang" << endl;
    } else if (bmi >= 18.5 ) {
        cout << "Kategori: Berat Badan Normal" << endl;
    } else if (bmi >= 25 ) {
        cout << "Kategori: Berat Badan Berlebih" << endl;
    } else if (bmi > 30) {
        cout << "Kategori: Obesitas " << endl;
    }

    return 0;
}
