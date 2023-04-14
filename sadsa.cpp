#include <iostream>
using namespace std;

int main(){
	int n, min, pom;
	
	cout<<"ile liczb";
	cin>>n;
	
	cin>>min;
	
	for(int i=1;i<n;i++){
		cin>>pom;
		if(min>pom){
			min=pom;
		}
	}
	
	cout<<"najmniejsza liczba jest "<<min<<endl;
	return 0;
}
