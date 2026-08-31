#include <iostream>
using namespace std;
int main(){
    int n,numArr;
    cin>>numArr;
    while(numArr>0){
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int sum;
        cin>>sum;
        int count=0;
        for(int i=0; i<n; i++){
            for(int j =i+1; j<n; j++){
                for(int k= j+1; k<n; k++){
                    if(k!=j or j!=i or k!=i){
                        if(a[i]+a[j]+a[k]==sum){
                            count++;
                        }
                    }
                }
            }
        }
        cout<<count<<endl;
        numArr--;
    }
}