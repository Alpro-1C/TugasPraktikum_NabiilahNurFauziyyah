#include <iostream>
using namespace std;
int main(){
    int j,i,a;
    j=10;
    i=8;

    cout <<"j="<<j <<endl;
    cout <<"i="<<i <<endl;

    a=j;
    j=i;
    i=a;

    cout<<endl;
    cout<< "j="<<j <<endl;
    cout<< "i="<<i <<endl;
return 0;
}


