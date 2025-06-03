#include <iostream>
#include <string>
using namespace std;
int main() {
	string a,d;
	bool zero=0;
	int b=0,c=0;
	cin>>a;
	for(int i=0;i<a.size();i++){
		if(a[i]=='1'){
			c=i;
		}
		else if(zero==0 && a[i]=='0' && b==0){
			zero=1;
			b=i;
		}
	}
	for(int i=b+=1;i<c;i++){
		d+=a[i];
	}
	if(c==0){
		cout<<"PUSTY";
	}
	else if(d.empty()){
		cout<<"PUSTY";
	}
	else{
		cout<<d;
	}
}  
