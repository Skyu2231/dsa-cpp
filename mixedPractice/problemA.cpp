#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int max_element=0;
    for(int i=0; i<n; i++){
        if(a[i]>=max_element){
            max_element=a[i];
        }
    }
    int secMax_element=-1;
    for(int i=0; i<n; i++){
        if(a[i]>secMax_element and a[i]!=max_element){
            secMax_element=a[i];
        }
    }
    cout<<secMax_element<<endl;
}