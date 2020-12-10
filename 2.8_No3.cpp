#include <iostream>
using namespace std;

//Buatlah program yang dapat menhitung volume suatu bola. 

int main (){
int r;
float volume;
    cout<<"===================================="<<endl;
    cout<<"   Program Menghitung Volume Bola"   <<endl;
    cout<<"===================================="<<endl;
    cout<<"Masukkan Jari-Jari Bola (dalam cm): ";cin>>r;
    cout<<"===================================="<<endl;

    volume = (4*3.14*r*r*r)/3;

    cout<<"Volume Bola Adalah "<<volume<<" cm^3"<<endl;
    cout<<"===================================="<<endl;
    return 0;
}
