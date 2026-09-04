#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<int>tv;
	int bob = 0;
	int cash = 0;
	for(int i = 0 ;i<n ;i++){
		int x;
		cin>>x;
		tv.push_back(x);
	}
	sort(tv.begin(),tv.end());//<-------- increasing sort
	for(int i = 0 ;i<m;i++){
		if(tv[i]<0){
			cash-=tv[i];
		}else{
			break;
		}
	}
	cout<<cash<<endl;
}