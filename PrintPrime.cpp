#include<iostream>
using namespace std;

//See this 2-3 times..
bool PrintPrime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            return false;
            
        }
        
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    for (int i = 2; i <= n; i++)
    {
        if ((PrintPrime(i)))
        {
            cout<<i<<endl;
        }
    }
    // PrintPrime(n);
    
}