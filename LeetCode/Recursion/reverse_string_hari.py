class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        def reverser(l,r):
            if(l<r):
                s[l] ,s[r] = s[r] , s[l]
                reverser(l+1 , r-1)
        
        reverser(0,len(s)-1)
