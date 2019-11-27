class Solution:
    # @param arrive : list of integers
    # @param depart : list of integers
    # @param K : integer
    # @return a boolean
    def hotel(self, arrive, depart, K):
        total = [-(x+1) for x in depart] + [y+1 for y in arrive]
        total.sort(key=abs)
        n = len(total)
        n_guest = 0
        for i in range(n):
            if total[i]>0:
                n_guest += 1
            elif total[i]<0:
                n_guest -= 1
            if n_guest > K:
                return False
        return True