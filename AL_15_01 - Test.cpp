#include<iostream>
using namespace std;
int main(){
	string d,j,m;
	int wynik=0;
	
	cin>>d>>j>>m;
	
	for(int i=0;i<d.size();i++){
		if (d[i] != j[i])
            wynik++;
        if (d[i] != m[i] && m[i] == j[i])
            wynik++;
        if (j[i] == d[i] && m[i] != j[i])
            wynik++;
    }
	cout<<wynik;
}
 
