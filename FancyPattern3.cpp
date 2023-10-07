#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int cond = i<=n/2 ? 2*i : 2*(n-i-1);
        for (int col = 0; col <= cond; col++)
        {
            if (col <= cond/2)
            {
                cout<<col+1;
            }
            else{
                cout<<cond-col+1;
            }
            
        }
        cout<<endl;
    }
    
    
}