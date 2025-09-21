#include <iostream>
#include <iomanip> // Untuk std::setprecision

using namespace std;

void hitungBalok(double panjang, double lebar, double tinggi, double &volume, double &luasPermukaan) {
    // Menghitung volume balok
    volume = panjang * lebar * tinggi;
    
    // Menghitung luas permukaan balok
    luasPermukaan = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
}

int main() {
    double panjang, lebar, tinggi;
    double volume, luasPermukaan;
    
    cout << "Masukkan dimensi balok:" << endl;
    
    // Menerima input dari pengguna
    cout << "Panjang: ";
    cin >> panjang;
    cout << "Lebar: ";
    cin >> lebar;
    cout << "Tinggi: ";
    cin >> tinggi;
    
    // Menghitung volume dan luas permukaan
    hitungBalok(panjang, lebar, tinggi, volume, luasPermukaan);
    
    // Menampilkan hasil dengan format yang rapi
    cout << fixed << setprecision(2);
    cout << "\nHasil Perhitungan Balok:" << endl;
    cout << "Panjang   : ";  // << endl;
    cout << "Lebar     : "; // << endl;
    cout << "Tinggi    : ";
    cout << "Volume    : ";
    cout << "Luas Permukaan : " << endl;

    cout << fixed << setprecision(2);
    cout << panjang; // << endl;
    cout << lebar; // << endl;
    cout << tinggi;
    cout << volume;
    cout << luasPermukaan << endl;
    
    return 0;
}
