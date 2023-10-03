#include<iostream>
using namespace std;

bool CheckPrimeOrNot(int num){
    for (int i = 2; i < num; i++)
    {   
        if (num%i==0)
        {
            return false;
            // cout<<"Not a PrimeNo"<<endl;
        }
        
    }
    return true;
    
}
int main(){
    //Not valid for 1.
    int n;
    cout<<"Enter the prime no. : "<<endl;
    cin>>n;
    bool ans = CheckPrimeOrNot(n);
   
    if (ans)
    {
        cout<<"Prime NO"<<endl;
    }
    else{
        cout<<"Not a prime no"<<endl;
    }
    // cout<<CheckPrimeOrNot(n)<<endl;
    return 0;
}