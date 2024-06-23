#include<iostream>
using namespace std;

int main(){
    int num = 10;
    if (num%2 == 0){
        cout << "the number is even" <<endl;
    }else{
        cout << "the number is odd"<<endl;
    }


    ( num % 2 == 0)? cout << "even" << endl : cout << "odd" <<endl;
}