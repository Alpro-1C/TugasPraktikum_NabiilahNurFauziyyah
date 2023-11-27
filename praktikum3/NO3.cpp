#include <iostream>
using namespace std;
int main (){

    int jia;
    float Luas, P, L, S, A, T;
    cout<<"Pilih Menu: "<<endl;
    cout<<"[1]Luas Persegi"<<endl;
    cout<<"[2]Luas Persegi Panjang"<<endl;
    cout<<"[3]Luas Segitiga"<<endl;
    cout<<endl;

    cout<<"Masukkan pilihan anda: ";
    cin>>jia;
    cout<<endl;
    switch(jia){
    case 1:
    cout<<"Masukkan Sisi: ";
    cin>>S;
    Luas=S*S;
    cout<<"Luas Persegi= "<<endl;
    cout<<Luas;
    break;

    case 2:
    cout<<"Masukkan Panjang: ";
    cin>>P;
    cout<<"Masukkan Lebar: ";
    cin>>L;
    Luas=P*L;
    cout<<"Luas Persegi Panjang= "<<endl;
    cout<<Luas;
    break;

    case 3:
    cout<<"Masukkan Alas: ";
    cin>>A;
    cout<<"Masukkan Tinggi: ";
    cin>>T;
    Luas=0.5*(A*T);
    cout<<"Luas Seegitiga= "<<endl;
    cout<<Luas;
    break;

    default:
        cout<<"Maaf, pilihan menu yang anda masukkan tidak terdaftar"<<endl;
        break;
    }
    cout<<endl;
    cout<<"SUCCESS";

    return 0;
}
