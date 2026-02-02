class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        char result = 'z';
        bool found = false;
        for (int i = 0; i < letters.size(); i++)
        {
            if (letters[i] > target)
            {
                if (letters[i] <= result)
                {
                    result = letters[i];
                    found = true;
                }
            }
        }
        if (found)
        {
            return result;
        }
        else
        {
            return letters[0];
        }
        return result;
    }
};