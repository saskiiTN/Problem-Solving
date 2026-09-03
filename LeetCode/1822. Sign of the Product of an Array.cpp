class Solution {
public:
    int signFunc(int x){
        if(x>0){
            return 1 ;
        }else if(x<0){
            return -1;
        }else{
            return 0;
        }
    }
    int arraySign(vector<int>& nums) {
        int product = 1;
        for(int x : nums){
            if (signFunc(x)==-1){
                product = -product;
            }
            else if(signFunc(x)==0){
                product = 0;
            }
        }
        return signFunc(product);
    }
};	