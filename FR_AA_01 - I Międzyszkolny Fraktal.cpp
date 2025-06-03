#include<iostream>
using namespace std;
int main(){
	int a,b;
	int ile=0;
	
	for(int i=1;i<=4;i++){
		cin>>a>>b;
		ile+=(a-b);
	}
	cout<<ile;
}
 
