#include <iostream>
using namespace std;

//Tuliskan program untuk menghitung total harga barang 
//dengan ketentuan berikut:

int main (){
    int jumlah, total;

    cout<<"========================================="<<endl;
    cout<<"|    Program Menghitung Harga Barang    |"<<endl;
    cout<<"========================================="<<endl;
    cout<<"|   Jumlah Barang   ||   Harga Barang   |"<<endl;
    cout<<"========================================="<<endl;
    cout<<"|       < 100       ||   Rp 9.999,00    |"<<endl;
    cout<<"|      >= 100       ||   Rp 7.490,00    |"<<endl;
    cout<<"|      >= 200       ||   Rp 5.999,00    |"<<endl;
    cout<<"========================================="<<endl;
    cout<<endl;

    cout<<"Masukkan Jumlah Barang yang Anda Beli: ";cin>>jumlah;
    if (jumlah < 100){
        total = jumlah*9999;
        cout<<"Harga Barang yang Harus Anda Bayar adalah Rp "<<total<<",00 ";
    }
    else if (jumlah >= 100 && jumlah < 200){
        total = jumlah*7490;
        cout<<"Harga Barang yang Harus Anda Bayar adalah Rp "<<total<<",00 ";
    }
    else {
        total = jumlah*5999;
        cout<<"Harga Barang yang Harus Anda Bayar adalah Rp "<<total<<",00 ";
    }
}
