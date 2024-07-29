#include <iostream>
using namespace std;
// Varun Pendem
// PRN: 23070123149

int main()

{   int one = 1; 
    int a1 = 4;
    int a = 5;
    int b = 10;
    int c = 15;
    int d = 20;
    int e = 25;

    //Arithmetic 
    a+=55;
    a++;
    b/=10;
    c*=15;
    d-=20;
    e%=24;
    e--;

    //comparision 
    if(a>>b){
        cout<<"a>b"<<endl;
    }
    if(d==0){
        cout<<"d=e"<<endl;
    }

    

    cout<<endl<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
}
