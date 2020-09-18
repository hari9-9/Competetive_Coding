class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[n][m];
        int i,j;
        //row
        for(i=0;i<n;i++)
        {
            dp[i][0]=1;
        }
        //col
        for(i=0;i<m;i++)
        {
            dp[0][i]=1;
        }
        for(i=1;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[n-1][m-1];
        
    }
};
