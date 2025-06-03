#include<iostream>
using namespace std;
int main(){
	int n,k,w=0;
	cin>>n;
	int t[n];
	for(int i=0;i<n;i++){
		cin>>t[i];
	}
	for(int i=0;i<n-2;i++){
		if(t[i]+t[i+1]==t[i+2]){
			w++;
		}
	}
	cout<<w;
}  
