#include<iostream>
using namespace std;

int fact(int num){
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
        
        // cout<<fact<<endl;
        // fact++;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    // fact(n);
    cout<<fact(n)<<endl;
}