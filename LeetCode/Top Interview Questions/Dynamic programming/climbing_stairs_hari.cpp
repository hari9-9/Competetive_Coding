public:
    int climbStairs(int n) {
        //cout<<n;
        int ways[n+1];
        ways[0] = 1;
        ways[1] = 1;
        for (int i=2; i<=n ; i++)
        {
            ways[i] = ways[i-1]+ways[i-2];
        }
        return ways[n];
    }
};
