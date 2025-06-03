#include <iostream>
using namespace std;
int karty(string a, int w=0){
	for(int i=0;i<=a.size();i++){
		if(a[i]=='2'){
			w+=2;
		}
		else if(a[i]=='3'){
			w+=3;
		}
		else if(a[i]=='4'){
			w+=4;
		}
		else if(a[i]=='5'){
			w+=5;
		}
		else if(a[i]=='6'){
			w+=6;
		}
		else if(a[i]=='7'){
			w+=7;
		}
		else if(a[i]=='8'){
			w+=8;
		}
		else if(a[i]=='9'){
			w+=9;
		}
		else if(a[i]=='T'){
			w+=10;
		}
		else if(a[i]=='J'){
			w+=11;
		}
		else if(a[i]=='Q'){
			w+=12;
		}
		else if(a[i]=='K'){
			w+=13;
		}
		else{
			w+=14;
		}
	}
	return w;
}
int main() {
	int wj=0,ws=0;
	string j,s;
	
	cin>>j>>s;
	wj=karty(j);
	ws=karty(s);
	if(wj>ws){
		cout<<"JASIO";
	}
	else if(wj<ws){
		cout<<"STASIO";
	}
	else{
		cout<<"REMIS";
	}
} 
