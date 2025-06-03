#include<iostream>
using namespace std;
int main(){
	int t,cos=0;
	char pierw,ostat;
	cin>>t;
	for(int i=1;i<=t;i++){
		string a;
		cin>>a;
		int dl=a.size();
		for(int j=0;j<dl;j++){
			if(a[j]>=48 && a[j]<=57){
				cos++;
				if(cos==1){
					pierw=a[j];
				}
				else{
					ostat=a[j];
				}
			}
		}
		if(cos<2){
			cout<<"BRAK"<<endl;
		}
		else{
		cout<<pierw<<" "<<ostat<<endl;
		}
		
		cos=0;
	}
} 
