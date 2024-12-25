class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        S={}
        T={}

        for i in range(len(s)):
            if s[i] not in S:
                S[s[i]]=i
            if t[i] not in T:
                T[t[i]]=i
            if  S[s[i]] != T[t[i]]:
                return False
        return True


        