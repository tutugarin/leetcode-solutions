class Solution:
    def recursion(self, st, count1, count2, n, answer):
        if count1 == n and count2 == n:
            answer.append(st)
            return
        if count1 > count2:
            self.recursion(st + ")", count1, count2 + 1, n, answer)
        if count1 < n:
            self.recursion(st + "(", count1 + 1, count2, n, answer)
            
    def generateParenthesis(self, n: int) -> List[str]:
        start, c1, c2 = "", 0 , 0
        answer = []
        self.recursion(start, c1 ,c2, n, answer)
        return answer
        
        
