/*
#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    cout << "Masukkan bilangan pertama: ";
    cin >> num1;
    cout << "Masukkan bilangan kedua: ";
    cin >> num2;

    cout << "Hasil penjumlahan: " << num1 + num2 << endl;
    cout << "Hasil pengurangan: " << num1 - num2 << endl;
    cout << "Hasil perkalian: " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Hasil pembagian: " << num1 / num2 << endl;
    } else {
        cout << "Pembagian dengan nol tidak dapat dilakukan." << endl;
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

string angkaKeTulisan(int angka) {
    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan", "sepuluh", "sebelas"};

    if (angka == 0) return "nol";
    if (angka == 100) return "seratus";

    if (angka <= 11) return satuan[angka];
    if (angka <= 19) return satuan[angka % 10] + " belas";
    if (angka <= 99) {
        return satuan[angka / 10] + " puluh" + (angka % 10 ? " " + satuan[angka % 10] : "");
    }
    return ""; // Untuk angka di luar rentang
}
int main() {
    int angka;
    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka >= 0 && angka <= 100) {
        cout << angka << " : " << angkaKeTulisan(angka) << endl;
    } else {
        cout << "Angka harus berada dalam rentang 0-100." << endl;
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

void printMirror(int n) {
    for (int i = n; i >= 1; i--) {
        string line = "";
        for (int j = i; j >= 1; j--) {
            line += to_string(j);
        }
        for (int j = 2; j <= i; j++) {
            line += to_string(j);
        }
        cout << line << " * " << line << endl;
    }
}

int main() {
    int input;
    cout << "Input: ";
    cin >> input;

    cout << "Output:" << endl;
    printMirror(input);

    return 0;
}
*/

