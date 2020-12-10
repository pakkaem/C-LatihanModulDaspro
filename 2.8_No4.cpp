#include <iostream>
using namespace std;

//Buatlah program yang dapat mengkonversi inputan menit,
//kemudian konversikan detik tersebut kedalam detik

int main (){
    int menit, detik;
    cout<<"==============================="<<endl;
    cout<<"Program Konversi Menit ke Detik"<<endl;
    cout<<"==============================="<<endl;
    cout<<"Masukkan Jumlah Menit: ";cin>>menit;
    cout<<"==============================="<<endl;
    detik = menit*60;
    cout<<"Jumlah "<<menit<<" Menit adalah "<<detik<<" detik"<<endl;
}
