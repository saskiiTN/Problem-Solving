#include <bits/stdc++.h>
using namespace std;

int main(){
	long long cash;
	long long ans;
	cin>>cash;
	if(cash>=0){
		cout<<cash<<endl;
	}else{
		cash = -cash;
		long long beforeLast = (cash/10)%10;
		long long last = cash%10;
		if(last>beforeLast){
			ans = cash/10;
		}else{
			ans = cash/100;
			ans = ans*10;
			ans = ans + (cash%10);
		}
		ans = -ans;
		cout<<ans<<endl;
	}
}