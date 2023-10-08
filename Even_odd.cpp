#include<iostream>
using namespace std;

//Normal method
// void EvenOdd(int num){
//     if (num%2 == 0)
//     {
//         cout<<"Even"<<endl;
//     }
//     else{
//         cout<<"Odd"<<endl;
//     }
// }

//Bitwise Method
void EvenOdd(int num){
    //Use brackets in num&1 because its giving error
    if ((num&1) == 0)
    {
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}


int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    EvenOdd(n);
    // EvenOdd(22);
}