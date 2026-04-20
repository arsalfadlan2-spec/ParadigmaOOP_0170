#include <iostream>
using namespace std;

class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void tampilkanData() {
        cout << "Nama Barang       : " << nama << endl;
        cout << "Jumlah Barang     : " << jumlah << endl;
        cout << "Kategori Barang   : " << kategori << endl;
        cout << "Tanggal Produksi  : " << tanggalProduksi << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    // Object pertama
    Barang elektronik;
    elektronik.nama = "Samsung A55 5G";
    elektronik.jumlah = 15;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "12-03-2026";

    // Object kedua
    Barang nonElektronik;
    nonElektronik.nama = "Pedang";
    nonElektronik.jumlah = 8;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "20-01-2026";

    cout << "Data Barang Elektronik" << endl;
    elektronik.tampilkanData();

    cout << "Data Barang Non Elektronik" << endl;
    nonElektronik.tampilkanData();

    return 0;
}