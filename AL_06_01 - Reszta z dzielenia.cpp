#include <iostream>
using namespace std;
int main()
{
    int ile,a,b,r=0;
    cin>>ile;
    for(int i=1;i<=ile;i++){
        cin>>a>>b;
    	r=a%b;
        if(r<0 && b>0)
        r+=b;
        else if(r<0 && b<0)
        r+=-b;
        cout<<r<<endl;
    }
    return 0;
}
