#include<iostream>
using namespace std;
int main(){
	float k;
	cin>>k;
	k/=1.609344;
	if(k<300){
		cout<<"NIE";
	}
	else if(k>500){
		cout<<"TAK";
	}
	else{
		cout<<"SPRAWDZIMY TWOJE OBECNE BUTY";
	}
}  
