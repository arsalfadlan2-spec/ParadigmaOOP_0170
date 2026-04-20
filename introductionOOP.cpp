#include <iostream>
using namespace std;

class Mahasiswa{
public:
    int nim;
    string nama;
    float nilai;
    
    void inputData(int n, string nm, float nl){ 
    nim = n;
    nama = nm;
    nilai = nl;
    }

    void printData(){
        cout << "NIM   : " << nim << endl;
        cout << "Nama  : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
   
   string getStatus(){
    if(nilai >= 75)
        return "Lulus";
    else
        return "Tidak Lulus";

    }
};

int main(){
    Mahasiswa mhs;
    mhs.inputData(2022, "Abra", 90.5);
    mhs.printData();

    return 0;
}