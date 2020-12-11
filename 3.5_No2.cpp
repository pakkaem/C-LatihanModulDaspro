#include <iostream>
using namespace std;

//Buatlah program yang dapat menentukan apakah seorang siswa
//dapat melaksanakan ujian. Ketentuan ujian adalah kehadiran minimal
//75% dari total 16 pertemuan.

int main (){
    int jumlah;
    cout<<"======================================================="<<endl;
    cout<<"           APAKAH ANDA BISA MENGIKUTI UJIAN?           "<<endl;
    cout<<" Syarat: Kehadiran Minimal 75% dari Total 16 Pertemuan "<<endl;
    cout<<"======================================================="<<endl;
    cout<<"Masukkan Jumlah Pertemuan Anda: ";cin>>jumlah;

    if (jumlah >= 12 && jumlah < 17 ){
        cout<<"Selamat! Anda Bisa Mengikuti Ujian!"<<endl;
    }
    else if (jumlah < 12 && jumlah > 0){
        cout<<"Mohon Maaf. Anda Tidak Bisa Mengikuti Ujian."<<endl;
    }
    else {
        cout<<"Masukkan Jumlah Pertemuan Dengan Benar!"<<endl;
    }
}
