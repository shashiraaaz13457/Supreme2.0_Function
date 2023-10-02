#include<iostream>
using namespace std;

void Count(int num){
    for (int i = 1; i <= num; i++)
    {
        cout<<i<<endl;
    }
    
}
int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    Count(n);
}