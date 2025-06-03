#include<iostream>
using namespace std;
int main(){
 
    int ile=0,w=0,jezusmaria;
    string b;
 
    cin>>ile;
 
    int tc[1001] = {0};
 
    string nazwisko;
 
    for(int i=0;i<ile;i++){
        cin>>jezusmaria>>nazwisko;
        tc[jezusmaria]++;
    }
 
    for(int i=1;i<=1000;i++){
        if(tc[i]>0){
            w++;
        }
    }
    cout<<w;
}
 
