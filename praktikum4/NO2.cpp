#include <iostream>
using namespace std;
int main(){
    cout << "Nama : Nabiilah Nur Fauziyyah" <<endl;
    cout << "NPM  : 2310631170105" <<endl;
    cout << "Program Gambar Segitiga Karakter *" <<endl;
    for (int j = 0;j < 30; j++){
    cout << "=";
}
    cout << endl;
    int tinggi, a, b, c;
    cout << "Masukkan Tinggi Segitiga : ";
    cin >> tinggi;

    for (a=1; a<=tinggi; a++){
    for (b=1; b<=tinggi-a; b++){
        cout<<" ";
    }
    for (c=1; c<=a; c++){
        cout<<"* ";
    }
        cout<<endl;
}
cout << endl;
for (int j = 0;j < 30; j++){
    cout << "=";}
    return 0;
}
