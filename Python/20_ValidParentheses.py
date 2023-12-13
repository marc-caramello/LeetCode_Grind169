class Solution:
    def CacheIsEmpty(cache) -> bool:
        if(len(cache) == 0):
            return True
        return False
    
    def MatchIsFound(endOfCache, currentSymbol) -> bool:
        circleMatches = (endOfCache == "(" and currentSymbol == ")")
        curlyMatches = (endOfCache == "{" and currentSymbol == "}")
        squareMatches = (endOfCache == "[" and currentSymbol == "]")

        if(circleMatches or curlyMatches or squareMatches):
            return True
        return False

    def isValid(self, s: str) -> bool:
        cache = []
        
        for i,currentSymbol in enumerate(s):
            if(not Solution.CacheIsEmpty(cache)):
                endOfCache = cache[-1]

                if(Solution.MatchIsFound(endOfCache, currentSymbol)):
                    cache.pop()
                else:
                    cache.append(currentSymbol)
            else:
                cache.append(currentSymbol)
        if(Solution.CacheIsEmpty(cache)):
            return True
        return False
