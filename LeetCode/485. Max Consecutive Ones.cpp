class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int cp = 0 ;
        for(int number : nums){
            if(number ==1){
                cp++;
                if (cp>max){max = cp;}
                
            }
            else{cp=0;}
        }
        return max;
    }
};