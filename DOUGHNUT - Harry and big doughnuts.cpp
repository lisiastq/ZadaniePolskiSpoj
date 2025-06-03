#include<iostream>
using namespace std;
int main(){
	
	int ile,c,k,w,cos=0;
	
	cin>>ile;
	for(int i=1;i<=ile;i++){
		cin>>c>>k>>w;
		cos=c*w;
		if(cos<=k){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
}
} 
