#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cin>> num1>> num2;
    int lastNum1 = num1 % 10;
    int lastNum2 = num2 % 10;
    int sumLast12 = lastNum1 + lastNum2;
    cout<<sumLast12;
}   