#include<iostream>
using namespace std;

//LeetCode Problem #1
int main(){
    int x;
    cout<<"Enter the number: "<<endl;
    cin>>x;

    int ans = 0,rem = 0;
    //This is doing for negative like -123
    bool isNeg = false;
    if (x < 0)
    {
        isNeg = true;
        //Here the value of x turned into positive value.
        x = -x;
    }
    
    while(x > 0){
        rem = x % 10;
        ans = ans * 10 + rem;
        
        x = x/10;
    }
    //This is used so that the number will be in -ve if the negative input is there and positive if the positive output is there..
    isNeg ?cout<<"Reversed number is: "<<-ans<<endl:cout<<"Reversed number is: "<<ans;
}