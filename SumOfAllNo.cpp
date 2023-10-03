#include<iostream>
using namespace std;

void SumOfAll(int num){
    int ans = 0;
    for (int i = 0; i <= num; i++)
    {
        ans = ans + i;
        
    }
    cout<<ans;
    
}
int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    SumOfAll(n);
}