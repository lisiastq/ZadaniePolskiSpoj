#include<iostream>
using namespace std;
int main(){
	int ile;
	string sylaba,ostatnia;
	cin>>ile;
	cin>>ostatnia;
	ile--;
	while(ile--){
		cin>>sylaba;
		if(sylaba==ostatnia){
			if(sylaba=="ma"){
				cout<<"mama";
				break;
			}
			else if(sylaba=="ta"){
				cout<<"tata";
				break;
			}
		}
		else{
			ostatnia=sylaba;
		}
	}
}  
