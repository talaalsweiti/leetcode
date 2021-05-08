class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        dict={}
        c='a'
        i=25
        s='abcdefghijklmnopqrstuvwxyz'
        for i in s:
            dict[i]=0
    
        for i in sentence:
            dict[i] = 1
            
        for i in list(dict.values()):
            if i==0 :
                return 0;
        return 1;    
