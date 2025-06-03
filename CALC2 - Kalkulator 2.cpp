#include <iostream>
using namespace std;
int t[10];
int main(){
    int n1, n2;
    char zn;
    while(cin>>zn>>n1>>n2){
        if(zn=='z'){
            t[n1]=n2;
        }
        else if(zn=='+'){
            cout<<t[n1]+t[n2]<<endl;
        }
        else if(zn=='-'){
            cout<<t[n1]-t[n2]<<endl;
        }
        else if(zn=='*'){
            cout<<t[n1]*t[n2]<<endl;
        }
        else if(zn=='/'){
            cout<<t[n1]/t[n2]<<endl;
        }
        else if(zn=='%'){
            cout<<t[n1]%t[n2]<<endl;
        }
    }
} 
