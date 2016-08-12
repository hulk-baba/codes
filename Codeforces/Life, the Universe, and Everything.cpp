#include <iostream>
using namespace std;

int main()
{
    int a[100000];
    for(int i=0;;i++){
    	cin>>a[i];
    	if(a[i]==42){
    		break;
    	}
    	else
    	cout<<a[i]<<endl;
    }
    return 0;
}

