#include <iostream>
using namespace std; 
int main(){
    string words;
    getline(cin,words);
    int i=0;
    int maxWordLength=0;
    while(i<words.size()){
        int j=i;
        int countLetter=0, countSpace=0;
        while(j<words.size() and words[j]!=' '){
            j++;
            countLetter++;
        }
        while(words[j]==' ' and j<words.size()){
            countSpace++;
            j++;
        }
        if(countLetter>maxWordLength){
            maxWordLength=countLetter;
        }
        i=j;
    }
    cout<<maxWordLength<<endl;
}