#include <iostream>
#include <cmath>
using namespace std;
int main(){
    #define int long long
    int n;
    cin>>n;
    int primeCount=0;
    int num=1;
    while(num<=n){
        int count=0;
        for(int i=1; i<=sqrt(num); i++){
            if((num)%i==0){
                int j=num/i;
                if(i!=j){
                    count+=2;
                }
                else{
                    count+=1;
                }
            }
        }
        if(count==2){
            primeCount++;
        }
        num++;
    }
    cout<<primeCount<<endl;

}