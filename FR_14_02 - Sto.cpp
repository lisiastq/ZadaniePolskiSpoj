#include<iostream>
using namespace std;
int main(){
	string a;
	cin>>a;
	for(int i=0;i<a.size();i++){
		if(a[i]=='s' && a[i+1]=='t' && a[i+2]=='o'){
			cout<<"TAK";
			return 0;
		}
	}
	cout<<"NIE";
}
 
