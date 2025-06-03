#include<iostream>
using namespace std;
int main(){
    string tekst;
    int s=0,d,w=0;
    cin>>tekst;
    d=tekst.size();
    for(int i=0;i<d;i++){
        if(s==0&&tekst[i]=='k'){
            s++;
        }
        else if(s==1&&tekst[i]=='o'){
            s++;
        }
        else if(s==2&&tekst[i]=='t'){
            s++;
        }
        if(s==3){
            w++;
            s=0;
        }
    }
    if(w>0){
        cout<<w;
    }
    else{
        cout<<"NIE";
    }
} 
