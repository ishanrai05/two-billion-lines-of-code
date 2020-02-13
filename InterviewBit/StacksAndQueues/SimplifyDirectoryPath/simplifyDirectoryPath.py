class Solution:
    # @param A : string
    # @return a strings
    def simplifyPath(self, A):

        stack = []
        path = A.split('/')
        for p in path:
            if p=='': continue
            if stack:
                s = stack.pop()
                if p == '..': continue
                elif p == '.': stack.append(s)
                else:
                    stack.append(s)
                    stack.append(p)
            else:
                if p!='.' and p!='..': stack.append(p)
        ret = '/'.join(map(str,stack))
        return '/'+ret

