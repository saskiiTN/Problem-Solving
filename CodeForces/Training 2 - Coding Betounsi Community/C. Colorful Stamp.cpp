#include <bits/stdc++.h>
using namespace std;
bool isWhite(char a){
    if(a=='W'){
        return true;
    }else{
        return false;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        bool result = true;
        int toul;
        cin>>toul;
        string pic;
        cin>>pic;
        
        for(int i = 0; i<toul ; i++){
            
            if(!isWhite(pic[i])){
                
                int seqLength = 0;
                int j = i;
                
                while(j<toul&&pic[j]!='W'){
                    seqLength++;
                    j++;
                }
                
                if(seqLength>1){
                    int test = 0;
                    int first = i;
                    while(i<j){
                        if(pic[i]==pic[first]){
                            test++;
                        }
                        i++;
                    }
                    if(test==seqLength){
                        result = false;
                        i=toul+99;
                    }
                }else{
                    result = false;
                    i=toul+1;
                }
                
            }
            
        }
        
        
        if(result){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}