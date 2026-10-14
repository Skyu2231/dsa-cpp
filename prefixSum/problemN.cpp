#include <iostream>
#include <climits>
using namespace std;
int main(){
    #define int long long
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int p[n];
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        p[i]=sum;
    }
    int i=0;
    int j=i+k-1;
    int subSum=0;
    int max=LLONG_MIN;
    while(j<n){
        if(i==0){
            subSum=p[j];
        }
        else{
            subSum=p[j]-p[i-1];
        }
        j++;
        i++;
        if(subSum>max){
            max=subSum;
        }
    }
    cout<<max<<'\n';
}