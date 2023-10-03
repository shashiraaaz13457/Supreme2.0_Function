#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    for (int row = 0; row < n; row++)
    {   
        int ans ;
        for (int col = 0; col < 2*row+1; col++)
        {
            if (col == 0||col == 2*row)
            {
                cout<<"*";
            }
            
            else{
                ans = col;
                cout<<ans;
            }
            
        }
        // for (int reverse = ans; reverse > 1; )
        // {
        //     reverse--;
        //     cout<<reverse;
        // }
        cout<<endl;
        
    }
    
}