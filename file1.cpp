#include <iostream>
#include <string>

using namespace std;

//fungsi untuk menghitung nilai BMI
//menggunakan rumus: BMI = berat / (tinggi * tinggi)
float hitungBMI(float berat, float tinggi){
    return berat / (tinggi * tinggi);
}

// fungsi untuk menentukan kategori satus berat badan 
string cekstatus(float bmi){
    if (bmi < 18.5){
        return "berat badan kurang";
    } else if (bmi < 25){
        return "berat badan normal";
    } else if (bmi < 30){
        return "berat badan berlebihan";
    } else {
        return "obesitas";
    }
}

// Prosedur untuk input data dari pengguna
void masukanData(float &berat, float &tinggi) {
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}
