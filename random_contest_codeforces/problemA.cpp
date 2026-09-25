#include <iostream>
using namespace std; 
int main(){
    int testCase;
    cin>>testCase;
    while(testCase>0){
        int n;
        cin>>n;    
        char chr;
        cin>>chr;
        string str;
        cin>>str;
        int i=0;
        int j=(n-1);
        int count=0;
        while(i<=j){
            if(str[i]!=str[j] and ((str[i]==chr) or (str[j]==chr))){
                count++;
            }
            else if(str[i]!=str[j] and ((str[i]!=chr) and (str[j]!=chr))){
                count+=2;
            }
            i++;
            j--;
        }
        cout<<count<<endl;
        testCase--;
}
}