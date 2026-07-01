// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int len1 = s1.length();
        int len2 = s2.length();
        char last1 = s1[len1-1] ;
        char last2 = s2[len2-1];
        if(last1!=last2){//not same letter
            if(last1>last2){
                cout<<"<"<<endl;
            }else{
                cout<<">"<<endl;
            }
        }else{//same letter
            if(len1==len2){
                cout<<"="<<endl;
            }else{
                if(last1=='S'){
                    if(len1>len2){
                        cout<<"<"<<endl;
                    }else{
                        cout<<">"<<endl;
                    }
                }else{
                    if(len1>len2){
                        cout<<">"<<endl;
                    }else{
                        cout<<"<"<<endl;
                    }
                }
            }
        }
    }
}