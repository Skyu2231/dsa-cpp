#include <iostream>
using namespace std;
int main(){
    int numA = 65;
    int numZ = 90;
    while( numA <= numZ){
        cout<<(static_cast<char>(numA++))<<" ";
    }
}