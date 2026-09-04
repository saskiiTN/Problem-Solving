#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int diff = abs(n-m);
	if(n>m){
		n=n-diff;
	}else{
		m=m-diff;
	}
	int x = (n+m)/2;
	if(x%2==0){
		cout<<"Malvika"<<endl;
	}else{
		cout<<"Akshat"<<endl;
	}
}