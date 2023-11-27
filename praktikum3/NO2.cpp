#include <iostream>
using namespace std;
int main (){
    int j, i, a;

    cout<<"Masukkan angka pertama =";
    cin>>j;
    cout<<"Masukkan angka kedua =";
    cin>>i;
    cout<<"Masukkan angka ketiga =";
    cin>>a;
    cout<<endl;

    if(j > i & j > a){
        cout<< j <<"Angka terbesar.";
    }
    if(i > j & i > a){
        cout<< i <<"Angka terbesar.";
    }
    if(a > j & a > i){
        cout<< a <<"Angka terbesar.";
    }
    return 0;
}
