#include <iostream>
#include <string.h>
using namespace std;

//Buatlah program yang dapat menginputkan nama, dan nim
//kemudian tampilkan di layar.

int main (){
    cout<<"=========================="<<endl;
    cout<<"Program Input Nama dan NIM"<<endl;
    cout<<"=========================="<<endl;

    string nama;
    int nim;

    cout<<"Masukkan Nama Anda: ";cin>>nama;
    cout<<"Masukkan NIM Anda: ";cin>>nim;
    cout<<"=========================="<<endl;
    cout<<"Hallo "<<nama<<". NIM anda adalah "<<nim<<""<<endl;
return 0;
}