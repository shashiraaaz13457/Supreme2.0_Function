#include<iostream>
using namespace std;

// void FindMax(int a ,int b,int c){
//     if (a>b)
//     {
//         if (a>=c)
//         {
//             cout<<"Max no. is: "<<a;
//         }
//         else{
//             cout<<"Max no. is: "<<c;
//         }
//     }
//     else{
//         if (b>=c)
//         {
//             cout<<"Max no. is: "<<b;
//         }
//         else{
//             cout<<"Max no. is: "<<c;
//         }
        
//     }
    

// }

//New method

// void FindMax(int a ,int b,int c){
//     int ans = max(max(a,b),c);    
//     cout<<ans;

// }

//Return

int FindMax(int a ,int b,int c){
    int ans = max(max(a,b),c);    
    // cout<<ans;
    return ans;

}

int main(){
    int a,b,c;
    cout<<"Enter the 3 numbers: "<<endl;
    cin>>a>>b>>c;
    FindMax(a,b,c);
    cout<<FindMax(a,b,c);
    return 0;
}