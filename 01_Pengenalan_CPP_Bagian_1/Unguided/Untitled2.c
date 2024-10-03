#include <iostream>

using namespace std;

string angkaKeTulisan(int angka) {
    // Array untuk angka 0 sampai 19
    string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan",
                       "sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas",
                       "tujuh belas", "delapan belas", "sembilan belas"};

    // Array untuk angka puluhan
    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh",
                        "delapan puluh", "sembilan puluh"};

    // Mengkonversi angka ke dalam bentuk tulisan
    if (angka < 20) {
        return satuan[angka];  // Angka 0-19 langsung diambil dari array satuan
    } else if (angka < 100) {
        return puluhan[angka / 10] + (angka % 10 != 0 ? " " + satuan[angka % 10] : "");  // Untuk puluhan
    } else if (angka == 100) {
        return "seratus";  // Angka 100
    }

    return "";
}

int main() {
    int angka;

    // Meminta input dari pengguna
    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    // Memeriksa apakah angka valid
    if (angka < 0 || angka > 100) {
        cout << "Masukan harus antara 0 dan 100" << endl;
    } else {
        // Menampilkan hasil dalam bentuk tulisan
        cout << "Dalam bentuk tulisan: " << angkaKeTulisan(angka) << endl;
    }

    return 0;
}
