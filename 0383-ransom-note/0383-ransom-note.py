from collections import Counter
class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
       rsc=Counter(ransomNote)
       msc=Counter(magazine)

       for i in ransomNote:
          if rsc[i]>msc.get(i,0):
            return False
       return True