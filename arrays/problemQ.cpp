#include <iostream>
using namespace std;
int main(){
    int n,val;
    cin>>n>>val;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int countVal=0;
    for(int i=0; i<n; i++){
        for(int j =i+1; j<n; j++){
            for(int k= j+1; k<n; k++){
                for(int l=k+1; l<n; l++){
                    if(a[i]-2*a[j]+3*a[k]-4*a[l]==val){
                        countVal++;
                    }
                }
            }
        }
    }
    cout<<countVal<<endl;
}