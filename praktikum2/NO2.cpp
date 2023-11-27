#include <iostream>
using namespace std;
int main (){
    int p,a,r,k;
    cout <<"Jumlah Bebek=";
    cin >> p;
    cout <<"Jumlah Teman=";
    cin >> a;

    r=p/a;
    k=p%a;
    cout <<endl;
    cout <<"Jumlah Bebek yang dibagikan ke Teman="<<r <<endl;
    cout <<"Jumlah Sisa Bebek="<<k <<endl;
    return 0;
}
