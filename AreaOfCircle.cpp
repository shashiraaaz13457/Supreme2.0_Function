#include<iostream>
using namespace std;

void DisplayArea(float radius){
    
    float area = 3.14 * radius * radius;
    cout<<area;
}
// float DisplayArea(float radius){
//     float area = 3.14 * radius * radius;
//     return area;
// }
int main(){
    float radius;
    cout<<"Enter the radius"<<endl;
    cin>>radius;
    DisplayArea(radius);
}