#include <iostream>
using namespace std;
int main(){
    int i,j,n,countI;
    cin>>n;
    for(i=0;i<n;i++){
        countI=i;
        while(countI<n-1){
            cout<<" ";
            countI++;
        }
            for(j=0;j<=i;j++){
                if(j==0 or j==i or i==0 or i==n-1){
                    if(j!=i){
                        cout<<"*"<<" ";
                    }
                    else{
                        cout<<"*";
                    }
                }
                else{
                    cout<< "  ";
                }
            }
          cout<<endl;
        }
}