class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i]+=1;
                return digits;
            }
            digits[i]=0;
        }
        std::vector<int> result;
        result.resize(n+1);
        result[0]=1;
        return result;
    }
};
