class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        list= []
        i=1
        while (i<=n) :
            if (i%3==0 and i%5==0):
                list.append("FizzBuzz")
            elif (i%3==0) :
                list.append("Fizz")
            elif (i%5==0) :
                list.append("Buzz")
            else:
               list.append(str(i))
            i=i+1
        return list
            
