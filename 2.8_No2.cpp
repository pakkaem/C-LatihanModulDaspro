#include <iostream>
using namespace std;

//Buatlah program yang dapat menerima dua inputan bilangan
//integer, kemudian tampilkan jumlah dari kedua bilangan yang
//diinput berikut.

int main (){
int bil1, bil2, total;

cout<<"========================================="<<endl;
cout<<"Program Menjumlahkan Dua Bilangan Integer"<<endl;
cout<<"========================================="<<endl;

cout<<"Masukkan Bilangan Pertama: ";cin>>bil1;
cout<<"Masukkan Bilangan Kedua: ";cin>>bil2;
cout<<"========================================="<<endl;
total = bil1 + bil2;

cout<<"Jumlah Kedua Bilangan Tersebut Adalah "<<total<<""<<endl;
cout<<"========================================="<<endl;
}