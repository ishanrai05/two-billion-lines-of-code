class Solution:
    # @param A : string
    # @return a list of strings
    def prettyJSON(self, json):
        ret = []
        tabs = 0
        i = 0
        n = len(json)
        while(i<n):
            if json[i] in ['[','{']:
                ret.append('\t'*tabs+json[i])
                tabs += 1
                i+=1
            elif json[i] in [']','}']:
                tabs-=1
                ret.append('\t'*tabs+json[i])
                i+=1
            elif json[i] == ',':
                ret[-1]+=json[i]
                i+=1
            else:
                start = i
                while i<n and json[i] not in ['[','{','}',']',',']:
                    i+=1
                ret.append('\t'*tabs+json[start:i])
        return ret
