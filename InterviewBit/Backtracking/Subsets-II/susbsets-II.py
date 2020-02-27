class Solution:
    # @param A : list of integers
    # @return a list of list of integers
    def subsetsWithDup(self, A):
        A.sort();
        ans=[];
        present = {};
        def solve(nums,i,temp):
            if (i==len(nums)):
                t = temp;
                t.sort();
                t = tuple(t)
                if t not in present:
                    ans.append(t);
                    present[tuple(t)]=1;
            else:
                temp.append(nums[i]);
                solve(nums,i+1,temp)
                temp.pop()
                solve(nums,i+1,temp)
        solve(A,0,[])
        ans.sort();
        return ans;