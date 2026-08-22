#include <iostream>
using namespace std;
int main(){
    int numOfArr;
    cin>>numOfArr;
    for(int i =0 ; i<numOfArr; i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j =0; j<n; j++){
            cin>>arr[j];
        }
        int c0,c1;
        c0=0;
        c1=0;
        for(int i =0; i<n; i++){
            if(arr[i]==0){
                c0++;
            }
            else{
                c1++;
            }
        }
        for(int i=1; i<=c0; i++){
            cout<<"0 ";
        }
        for(int i=1; i<=c1; i++){
            cout<<"1 ";
        }
        cout<<endl;
    }
}