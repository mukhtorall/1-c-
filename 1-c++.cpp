#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	
	int a,b,c;
	
	cout<<" 1 - sonni kiriting "<<endl;  cin>>a;
	cout<<" 2 - sonni kiriting "<<endl;  cin>>b;
	cout<<" 3 - sonni kiriting "<<endl;  cin>>c;
	
	if(a>b && a>c){
		cout<<" kattasi => "<<a;
	}else if(b>a && b>c){
		cout<<" kattasi => "<<b;
	}else{
		cout<<" kattasi => "<<c;
	}
	
	return 0;
}
