// Online C++ compiler to run C++ program online
#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        bool test = true;
        map<int,vector<int>>indices;
        int len; cin>>len;
        int arr[len];
        for(int i = 0 ;i<len ;i++){
            cin>>arr[i];
            indices[arr[i]].push_back(i);
        }
        string s;
        cin>>s;
        
        for (const auto& [num, vec] : indices) {
            char c = s[vec[0]];
            for (int i = 1 ;i<vec.size();i++){
                if(s[vec[i]]!=c){
                    test = false;
                }
            }
        }
        if(test){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}