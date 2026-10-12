#include <iostream>
using namespace std;
int main(){
    #define int long long
    int n,q;
    cin>>n;
    char arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int newArr[n];
    for(int i=0; i<n; i++){
        if(arr[i]=='a' or arr[i]=='e' or arr[i]=='i' or arr[i]=='o' or arr[i]=='u'){
            newArr[i]=1;
        }
        else{
            newArr[i]=0;
        }
    }
    int p[n];
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=newArr[i];
        p[i]=sum;
    }
    cin>>q;
    while(q>0){
        int l,r;
        cin>>l>>r;
        if(l==1){
            cout<<p[r-1];
        }
        else{
            cout<<(p[r-1]-p[l-2]);
        }
        cout<<endl;
        q--;
    }
}