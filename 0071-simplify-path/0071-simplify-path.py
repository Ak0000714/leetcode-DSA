class Solution:
    def simplifyPath(self, path: str) -> str:
        st=[]
        simply=path.split("/")
        for each in simply:
            if each=="..":
                if st:
                    st.pop()
            elif each =="." or each=="":
              continue
            else:
                st.append(each)
        return "/"+"/".join(st)



        