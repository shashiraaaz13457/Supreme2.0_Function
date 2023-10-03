#include<iostream>
using namespace std;

void FindEven(int num){
    int ans = 0;
    for (int i = 2; i <= num; i+=2)
    {
        ans = ans + i;
        
    }
    cout<<ans<<endl;
    
}
int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    FindEven(n);
}