#include<iostream>
using namespace std;
int main(){
    int ile,a,b,w;
    cin>>ile;
    for(int i=0;i<ile;i++){
        cin>>a>>b;
        w=0;
        for(int j=a+1;j<b;j++){
            if(j%2==0){
                cout<<j<<" ";
            }
            else{
                w++;
            }
        }
        if(w==b-(a+1)){
            cout<<"BRAK";
        }
        cout<<endl;
    }
} 
