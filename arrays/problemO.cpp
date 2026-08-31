#include <iostream>
using namespace std;
int main(){
    int n, numArr;
    cin>>numArr;
    while (numArr>0){
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int inputSum,count=0;
        cin>>inputSum;
        for(int i=0; i<n; i++){
            for(int j= i+1; j<n; j++){
                if(a[i]+a[j]==inputSum){
                    count++;
                }
            }
        }
        cout<<count<<endl;
        numArr--;
    }   
}