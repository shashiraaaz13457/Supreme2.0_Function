#include<iostream>
using namespace std;

void printline();  //If we have to use the function written after main function then firstly we should declare it before main function.
int main(){
    printline();
    
}
void printline(){
    for (int i = 0; i < 10; i++)
    {
        cout<<"Sigma Male"<<endl;
    }
    
}