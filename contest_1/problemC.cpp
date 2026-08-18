#include <iostream>
using namespace std;
int main(){
    int count,divisor,num;
    cin>>num;
    // divisor=10;
    // count=0;
    // while(num/divisor!=0){
    //     divisor*=10;
    //     count++;
    // }
    // int storeRem= num%(divisor/10);
    // int secondLast= storeRem/(divisor/100);
    // cout<<secondLast;
    int lastTwo= num%100;
    int secondLastDigit = lastTwo/10;
    cout<<secondLastDigit<<endl;
}