#include<iostream>
using namespace std;

// void printSum(int a,int b,int c){
//     int sum = a + b + c;
//     cout<<"Addition of 3 number is: "<<sum<<endl;
// }

int printSum(int a,int b,int c){
    int sum = a + b + c;
    return sum;
}
int main(){
    int a,b,c;
    cout<<"Enter the 3 number: "<<endl;
    cin>>a>>b>>c;
    // int Ans = printSum(a,b,c);  // Ye v use kr skte h yh toh sidhe cout v krwa skte h.
    // cout<<"Sum of 3 number is: "<<Ans<<endl;
    cout<<"Sum of 3 number is: "<<printSum(a,b,c)<<endl;
    return 0;

}