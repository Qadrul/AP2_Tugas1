#include <iostream>
using namespace std;

main(){
    int n;
    cout<<"masukan angka:";
    cin >> n ;
    if (n % 2 == 0){
        cout<<"\nAngka yang Anda Masukan genap";
    }
    else if (n % 2 == 1 ){
        cout<<"\nAngka yang anda masukan ganjil";
    }
    else{
        cout<<"adalah 0";
    }
}