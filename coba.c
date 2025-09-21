#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string namaKaryawan;
    int jamKerja;
    int tarifPerJam, gajiTotal;

    cout << "Masukkan Nama Karyawan: ";
    getline(cin, namaKaryawan);
    cout << "Masukkan Jam Kerja: ";
    cin >> jamKerja;
    cout << "Masukkan Tarif Per Jam: ";
    cin >> tarifPerJam;

    gajiTotal = jamKerja * tarifPerJam;

    cout << endl << "===============================================" << endl;
    cout << setw(20) << left << "Nama Karyawan"
         << setw(15) << "Jam Kerja"
         << setw(15) << "Tarif Per Jam"
         << setw(15) << "Gaji Total" << endl;
    cout << "=================================================" << endl;

    cout << setw(20) << left << namaKaryawan
         << setw(15) << jamKerja
         << setw(15) << tarifPerJam
         << setw(15) << gajiTotal << endl;

    cout << "=================================================" << endl;

}
