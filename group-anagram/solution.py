class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        answer = []
        dict1 = {}
        for st in strs:
            sort_st = ''.join(sorted(st))
            if sort_st in dict1:
                dict1[sort_st].append(st)
            else:
                dict1[sort_st] = [st]
        for k, v in dict1.items(): 
            answer.append(v)
        return answer
            
        
