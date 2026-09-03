class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        //either all same parity or min is odd
        bool isOdd = false;
        bool isEven = false;
        int min = nums1[0];
        for(int i = 0;i<nums1.size() ; i++){
            if(nums1[i]%2==0){
                isEven = true;
            }else{
                isOdd=true;
            }
            if(nums1[i]<min){
                min = nums1[i];
            }
        }
        if(isOdd!=isEven){
            return true;
        }else{
            return (min%2!=0);
        }
    }
};