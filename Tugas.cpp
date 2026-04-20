#include <iostream>
using namespace std;

class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    // Method untuk menampilkan data
    void tampilkanData() {
        cout << "Nama Barang      : " << nama << endl;
        cout << "Jumlah           : " << jumlah << endl;
        cout << "Kategori         : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Barang elektronik;
    Barang nonElektronik;

    // Isi data object elektronik
    elektronik.nama = "Laptop";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2026-03-01";

    // Isi data object nonElektronik
    nonElektronik.nama = "Buku";
    nonElektronik.jumlah = 25;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "2026-01-15";

    // Tampilkan data
    elektronik.tampilkanData();
    nonElektronik.tampilkanData();

    return 0;
}