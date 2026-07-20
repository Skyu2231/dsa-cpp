#include <iostream>
using namespace std;
int main(){
    int length, breadth;
    cin>> length >> breadth;
    int area, perimeter;
    area= length*breadth;
    perimeter = 2 * (length+breadth);
    cout<<"Area = "<<area<<endl;
    cout<<"Perimeter = "<<perimeter<<endl;
}