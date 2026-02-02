class Solution
{
public:
    int minimumCost(vector<int> &nums)
    {
        int num1, num2 = 50, num3 = 50;
        int ix;
        num1 = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] < num2)
            {
                num2 = nums[i];
                ix = i;
            }
        }
        for (int i = 1; i < nums.size(); i++)
        {
            if (i != ix)
            {
                if (nums[i] < num3)
                {
                    num3 = nums[i];
                }
            }
        }
        int sum = num1 + num2 + num3;
        return sum;
    }
};