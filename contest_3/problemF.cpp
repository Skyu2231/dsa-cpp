#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    int i=0, j=0;
    int sumDiagonal=0, sumNonDiagonal;
    while(i<n and j<n){
        if(i==j or n-i==j){
            sumDiagonal+=a[i][j];
        }
        else{
            sumNonDiagonal+=a[i][j];
        }
    }
    cout<<sumDiagonal<<" "<<sumNonDiagonal<<endl;
}