#include <iostream>
using namespace std;
int main(){
    int nArr,n;
    cin>>nArr;
    while(nArr>0){
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            int count=0;
            for(int j=0; j<n; j++){
                if(a[j]==a[i]){
                    count++;
                }
            }
            if(count==2){
                cout<<a[i]<<endl;
                break;
            }
        }
        nArr--;
    }
}