#include <iostream>
#include <string>

using namespace std;

string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

string convertNumberToWords(int number) {
    if (number < 10) {
        return satuan[number];
    } else if (number < 20) {
        return "belas";
    } else {
        return puluhan[number / 10] + " " + satuan[number % 10];
    }
}

int main() {
    int angka;

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka >= 0 && angka <= 100) {
        string kata = convertNumberToWords(angka);
        cout << angka << ": " << kata << endl;
    } else {
        cout << "Angka harus antara 0 dan 100." << endl;
    }

    return 0;
}

