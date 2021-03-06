class Solution:
    # @param A : integer
    # @return a strings
    def intToRoman(self, A):
        
        ones = ['','I','II','III','IV','V','VI','VII','VIII','IX']
        tens = ['','X','XX','XXX','XL','L','LX','LXX','LXXX','XC']
        hundreds = ['','C','CC','CCC','CD','D','DC','DCC','DCCC','CM']
        thousands = ['','M','MM','MMM']
        ret = thousands[A//1000]+hundreds[(A%1000)//100]+tens[(A%100)//10]+ones[(A%10)]

        return ret        