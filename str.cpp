#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int k =5-i;k>0;k--){
            cout << " ";
        }
        for(int j=1;j<=(i+1);j++){
            cout<< "*"; 
        }
        for(int j=0;j<=(i-1);j++){
            cout<< "*"; 
        }
        cout << endl;
    }
    return 0;
}