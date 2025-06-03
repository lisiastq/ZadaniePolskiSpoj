#include<iostream>
using namespace std;
int main(){
	
	int a,b,ile=100;
	char z;
	
		while(cin>>z>>a>>b){
			if(z=='+'){
				cout<<a+b<<endl;
			}
			else if(z=='-'){
				cout<<a-b<<endl;
			}
			else if(z=='*'){
				cout<<a*b<<endl;
			}
			else if(z=='/'){
				cout<<a/b<<endl;
			}
			else{
				cout<<a%b<<endl;
			}
		}
	} 
