#include <iostream>
using namespace std;
int main() {
	int ilesb,ilelb,wynikb=0,wynikgb=0;
	int ilesf,ilelf,wynikf=0,wynikgf=0;
	cin>>ilesb>>ilelb>>ilesf>>ilelf;
	wynikb=(ilesb*2)+(ilelb*4);
	wynikf=(ilesf*2)+(ilelf*4);
	wynikgb=ilesb+ilelb;
	wynikgf=ilesf+ilelf;
		
	if(wynikb>wynikf){
		cout<<"Bajtek";
	}
	else if(wynikb<wynikf){
		cout<<"Frajtek";
	}
	
	else{
		if(wynikgb>wynikgf){
		cout<<"Bajtek";
		}
		else if(wynikgb<wynikgf){
		cout<<"Frajtek";
		}
		else{
		cout<<"remis";
		}
	}
}  
