/*
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    getch();
    return 0;
}

#include <iostream>
#define PHI 3.14 // Pendefinisian konstanta

using namespace std;

// Pendefinisian struktur
struct Point {
int x;
int y;
};

// Deklarasi fungsi
void printPoint(Point p);

int main() {
// Deklarasi variabel
int a = 5;
Point p = {1, 2};

cout << "Nilai a: " << a << endl;
printPoint(p);

return 0;
}

// Definisi fungsi
void printPoint(Point p) {
cout << "Point: (" << p.x << ", " << p.y << ")" << endl;
}

#include <iostream>
#define PHI 3.14 // Pendefinisian konstanta

using namespace std;

// Pendefinisian struktur
struct Point {
int x;
int y;
};

// Deklarasi fungsi
void printPoint(Point p);

int main() {
// Deklarasi variabel
int a = 5;
Point p = {1, 2};

cout << "Nilai a: " << a << endl;
printPoint(p);

return 0;
}

// Definisi fungsi
void printPoint(Point p) {
cout << "Point: (" << p.x << ", " << p.y << ")" << endl;
}

#include <iostream>
using namespace std;

int main() {
// Contoh identifier yang valid
int nilai1;
float nilai_rata2;
char _karakter;

// Tipe data dasar
char huruf = 'A';
int angka = 100;
float desimal = 3.14f;
double pi = 3.14159265359;
bool benar = true;

cout << "Char: " << huruf << endl;
cout << "Int: " << angka << endl;
cout << "Float: " << desimal << endl;
cout << "Double: " << pi << endl;
cout << "Bool: " << benar << endl;

return 0;
}

#include <iostream>
using namespace std;

#define PI 3.14159 // Konstanta menggunakan #define

int main() {
// Variabel
int x = 5;
float y = 3.14;

// Konstanta menggunakan const
const int MAX_VALUE = 100;

cout << "x = " << x << endl;
cout << "y = " << y << endl;
cout << "PI = " << PI << endl;
cout << "MAX_VALUE = " << MAX_VALUE << endl;

return 0;
}

#include <iostream>
#include <iomanip> // Untuk setprecision
using namespace std;

int main() {
string nama;
int umur;
float tinggi;

// Input
cout << "Masukkan nama: ";
getline(cin, nama);

cout << "Masukkan umur: ";
cin >> umur;

cout << "Masukkan tinggi (m): ";
cin >> tinggi;

// Output
cout << "\nData Anda:\n";
cout << "Nama: " << nama << endl;
cout << "Umur: " << umur << " tahun" << endl;
cout << "Tinggi: " << fixed << setprecision(2) << tinggi << " m" << endl;

return 0;
}

#include <iostream>
using namespace std;

int main() {
int a = 10, b = 3;

// Operator aritmatika
cout << "a + b = " << (a + b) << endl;
cout << "a - b = " << (a - b) << endl;
cout << "a * b = " << (a * b) << endl;
cout << "a / b = " << (a / b) << endl;
cout << "a % b = " << (a % b) << endl;

// Operator increment dan decrement
cout << "a++ = " << a++ << endl;
cout << "++b = " << ++b << endl;

// Operator perbandingan
cout << "a == b: " << (a == b) << endl;
cout << "a != b: " << (a != b) << endl;

// Operator logika
bool x = true, y = false;
cout << "x && y: " << (x && y) << endl;
cout << "x || y: " << (x || y) << endl;
cout << "!x: " << (!x) << endl;

return 0;
}

#include <iostream>
using namespace std;

int main() {
int nilai;
cout << "Masukkan nilai: ";
cin >> nilai;

// If-else
if (nilai >= 80) {
cout << "Nilai A" << endl;
} else if (nilai >= 70) {
cout << "Nilai B" << endl;
} else if (nilai >= 60) {
cout << "Nilai C" << endl;
} else {
cout << "Nilai D" << endl;
}

// Switch
int pilihan;
cout << "Masukkan pilihan (1-3): ";
cin >> pilihan;

switch (pilihan) {
case 1:
cout << "Anda memilih 1" << endl;
break;
case 2:
cout << "Anda memilih 2" << endl;
break;
case 3:
cout << "Anda memilih 3" << endl;
break;
default:
cout << "Pilihan tidak valid" << endl;
}

return 0;
}

#include <iostream>
using namespace std;

int main() {
// For loop
cout << "For loop:" << endl;
for (int i = 1; i <= 5; i++) {
cout << i << " ";
}
cout << endl;

// While loop
cout << "While loop:" << endl;
int j = 1;
while (j <= 5) {
cout << j << " ";
j++;
}
cout << endl;

// Do-while loop
cout << "Do-while loop:" << endl;
int k = 1;
do {
cout << k << " ";
k++;
} while (k <= 5);
cout << endl;

return 0;
}

#include <iostream>
using namespace std;

struct Mahasiswa {
string nama;
int umur;
float ipk;
};

int main() {
Mahasiswa mhs1, mhs2;

// Input data mahasiswa 1
cout << "Masukkan data mahasiswa 1:" << endl;
cout << "Nama: ";
getline(cin, mhs1.nama);
cout << "Umur: ";
cin >> mhs1.umur;
cout << "IPK: ";
cin >> mhs1.ipk;

cin.ignore(); // Membersihkan buffer

// Input data mahasiswa 2
cout << "\nMasukkan data mahasiswa 2:" << endl;
cout << "Nama: ";
getline(cin, mhs2.nama);
cout << "Umur: ";
cin >> mhs2.umur;
cout << "IPK: ";
cin >> mhs2.ipk;

// Menampilkan data mahasiswa
cout << "\nData Mahasiswa:" << endl;
cout << "1. " << mhs1.nama << " (" << mhs1.umur << " tahun) - IPK: " << mhs1.ipk << endl;
cout << "2. " << mhs2.nama << " (" << mhs2.umur << " tahun) - IPK: " << mhs2.ipk << endl;

return 0;
}

#include <iostream>
#define MAX 3
using namespace std;

struct Siswa {
string nama;
int nilai;
};

int main() {
Siswa siswa[MAX];

// Input data siswa
for (int i = 0; i < MAX; i++) {
cout << "Masukkan data siswa ke-" << i+1 << endl;
cout << "Nama: ";
cin >> siswa[i].nama;
cout << "Nilai: ";
cin >> siswa[i].nilai;
}

// Menampilkan data siswa
cout << "\nData Siswa:\n";
for (int i = 0; i < MAX; i++) {
cout << "Siswa ke-" << i+1 << endl;
cout << "Nama: " << siswa[i].nama << endl;
cout << "Nilai: " << siswa[i].nilai << endl;
}

return 0;
}

#include <iostream>
using namespace std;

// Deklarasi fungsi
float celsiusToFahrenheit(float celsius);
void printTemperature(float celsius, float fahrenheit);

int main() {
    float celsius, fahrenheit;

    cout << "Masukkan suhu dalam Celsius: ";
    cin >> celsius;

    fahrenheit = celsiusToFahrenheit(celsius);
    printTemperature(celsius, fahrenheit);

    return 0;
}

// Definisi fungsi
float celsiusToFahrenheit(float celsius) {
    return celsius * 1.8 + 32;
}

void printTemperature(float celsius, float fahrenheit) {
    cout << celsius << " Celsius = " << fahrenheit << " Fahrenheit" << endl;
}

*/
