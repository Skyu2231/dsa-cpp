#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for( int i=0; i<n; i++){
        cin>>a[i];
    }
    int totalShift=1;
    for(int i=1; i<n; i++){
        int localShift=0;
        int temp= a[i];
        int j=i-1;
        while(j>=0 and a[j]>temp){
            a[j+1]=a[j];
            j--;
            localShift++;
        }
        a[j+1]=temp;
        totalShift++;
        cout<<"Pass "<<i<<": ";
        for(int k=0; k<n; k++){
            cout<<a[k]<<" ";
        }
        cout<<", ";
        for(int k=0; k<n; k++){
            if(k==totalShift){
                cout<<"| ";
            }
                cout<<a[k]<<" ";
        }
        cout<<"shifts = "<<localShift<<endl;
    }
}