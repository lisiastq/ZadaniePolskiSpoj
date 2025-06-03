#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    double ile,p,o,c,cp;
    cin>>ile;
    for(int i=0;i<ile;i++){
        cin>>p>>o;
        c=100;
        cp=c;
        c-=(p*c)/100;
        c-=(o*c)/100;
        cp-=c;
        cout<<fixed<<setprecision(2)<<cp<<endl;
    }
} 
