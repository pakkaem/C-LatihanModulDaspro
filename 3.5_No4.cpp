#include <iostream>
using namespace std;

//Tuliskan program operasi matematika sederhana dengan ketentuan
//apabila user menginput angka 1 maka dilakukan proses pertambahan,
//apabila user menginput angka 2 maka dilakukan proses pengurangan,
//apabila user menginput angka 3 maka dilakukan proses perkalian, 
//apabila user menginput angka 4 maka dilakukan proses pembagian, 

int main (){
    int simbol;
    float angka1, angka2;
    float hasil;

    cout<<"========================================"<<endl;
    cout<<"| Program Operasi Matematika Sederhana |"<<endl;
    cout<<"========================================"<<endl;
    cout<<"| Penjumlahan = 1                      |"<<endl;
    cout<<"| Pengurangan = 2                      |"<<endl;
    cout<<"| Perkalian   = 3                      |"<<endl;
    cout<<"| Pembagian   = 4                      |"<<endl;
    cout<<"========================================"<<endl;
    cout<<"Masukkan Operasi Aritmatika yang Diinginkan (1/2/3/4): ";cin>>simbol;
    cout<<"Masukkan Bilangan Pertama: ";cin>>angka1;
    cout<<"Masukkan Bilangan Kedua: ";cin>>angka2;
    cout<<"========================================"<<endl;

    if (simbol == 1){
        hasil = angka1 + angka2;
        cout<<"Hasil Operasi "<<angka1<<" + "<<angka2<<" adalah "<<hasil<<""<<endl;

    }
    else if (simbol == 2){
        hasil = angka1 - angka2;
        cout<<"Hasil Operasi "<<angka1<<" - "<<angka2<<" adalah "<<hasil<<""<<endl;

    }
    else if (simbol == 3){
        hasil = angka1 * angka2;
        cout<<"Hasil Operasi "<<angka1<<" x4  "<<angka2<<" adalah "<<hasil<<""<<endl;

    }
    else if (simbol == 4){
        hasil = angka1 / angka2;
        cout<<"Hasil Operasi "<<angka1<<" : "<<angka2<<" adalah "<<hasil<<""<<endl;

    }
    else {
        cout<<"Tidak Bisa Membaca Hasil"<<endl;
    }
}