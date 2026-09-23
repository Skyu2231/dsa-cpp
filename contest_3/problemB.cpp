#include <iostream>
using namespace std;
int main(){
    int tcases;
    cin>>tcases;
    while(tcases>0){
        int num;
        cin>>num;
        int digitSum=0;
        while(num/10 != 0){
            digitSum+=num%10;
            num=num/10;
        }
        digitSum+=num;
        if(digitSum==7){
            cout<<"Thala for a reason";
        }
        else{
            cout<<"Blocked for no reason";
        }
        cout<<endl;
        tcases--;
    }
}