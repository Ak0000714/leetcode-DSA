class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:

        n=len(s)
        w=len(t)
        ind=0
        for i in range(w):
            if t[i]==s[ind]:
                ind+=1
            
        if ind==n:
           return True

        else:
            return False
        


    


        