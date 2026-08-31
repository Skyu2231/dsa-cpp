#include <iostream>
using namespace std;
int main(){
    int n, safeScore;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>safeScore;
    int countPass=0, countFail=0;
    for(int i=0; i<n; i++){
        if(a[i]>=safeScore){
            countPass++;
        }
        else{
            countFail++;
        }
    }
    cout<<"Pass: "<<countPass<<endl;
    cout<<"Fail: "<<countFail<<endl;
}