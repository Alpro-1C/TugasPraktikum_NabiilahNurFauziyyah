#include <iostream>
using namespace std;
int main (){
cout << "Nama : Nabiilah Nur Fauziyyah"<<endl;
cout << "NPM : 2310631170105"<<endl;
cout << "Program Deret Fibonacci" <<endl;
for (int j = 0;j < 30; j++){
    cout << "=";}

    cout << endl;
    int j, a1 = 0,a2 = 1, angka_selanjutnya = 0;
    cout << "Jumlah Deret Fibonacci : ";
    cin >> j;

    for (int i=1; i<=j; i++){
        if(i == 1){
            cout << a1 << " ";}

        if(i == 2){
            cout << a2 << " ";}

        angka_selanjutnya = a1 + a2;
        a1 = a2;
        a2 = angka_selanjutnya;
        cout << angka_selanjutnya << " ";}

cout << endl;
for (int j = 0;j < 30; j++){
    cout << "=";}
    return 0;
}
