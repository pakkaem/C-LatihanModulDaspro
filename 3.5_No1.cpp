#include <iostream>
using namespace std;

//Tuliskan program yang akan menghasilkan bilangan absolut

int main (){
    int bilangan;
    cout<<"==================================="<<endl;
    cout<<"Program Menentukan Bilangan Absolut"<<endl;
    cout<<"==================================="<<endl;
    cout<<"Masukkan Bilangan yang Ingin Dicari: ";cin>>bilangan;
    
    if (bilangan < 0){
    bilangan = -bilangan;
        cout<<"Bilangan Absolut dari "<<-bilangan<<" adalah "<<bilangan<<""<<endl;
    }
    else {
        cout<<"Bilangan Absolut dari "<<bilangan<<" adalah "<<bilangan<<""<<endl;
    }
    cout<<"==================================="<<endl;
    return 0;
}
