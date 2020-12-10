#include <iostream>
using namespace std;

//Buatlah program yang menerima 2 buah inputan string.
//Kemudian hitung jumlah karakter dari kedua string tersebut

int main (){
    int total, jumlahX, jumlahY;
    string x,y;
    cout<<"=================================="<<endl;
    cout<<"Program Menghitung Jumlah Karakter"<<endl;
    cout<<"          Dari Dua Kata           "<<endl;
    cout<<"=================================="<<endl;
    cout<<"Masukkan Kata Pertama: ";cin>>x;
    cout<<"Masukkan Kata Kedua: ";cin>>y;

    jumlahX = x.length ();
    jumlahY = y.length ();
    total = x.length () + y.length ();

    cout<<"Jumlah Karakter Dari Dua Kata Tersebut Adalah "<<total<<" karakter."<<endl;
}