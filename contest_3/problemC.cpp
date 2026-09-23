#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int nInvester;
    cin>>nInvester;
    int arrInvester[nInvester];
    for(int i=0; i<nInvester; i++){
        cin>>arrInvester[i];
    }
    int totalInvestment=0, maxInvestment=0,minInvestment=arrInvester[0],avgInvestment=0;
    for(int i=0; i<nInvester; i++){
        totalInvestment+=arrInvester[i];
        if(arrInvester[i]>=maxInvestment){
            maxInvestment=arrInvester[i];
        }
        if(arrInvester[i]<=minInvestment){
            minInvestment=arrInvester[i];
        }
    }
    avgInvestment=floor((static_cast <double>(totalInvestment/nInvester)));
    cout<<totalInvestment<<" ";
    cout<<maxInvestment<<" ";
    cout<<minInvestment<<" ";
    cout<<avgInvestment<<endl;
}