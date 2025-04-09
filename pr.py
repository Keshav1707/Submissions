def rec(ind, pick, v, dp):
    if ind == len(v):
        return 0
    if dp[ind][pick] != -1:
        return dp[ind][pick]
    
    a = 0
    if pick == 0:
        a += max(v[ind] + rec(ind + 1, 0, v, dp), rec(ind + 1, 1, v, dp))
    else:
        a += v[ind] + rec(ind + 1, 0, v, dp)
    
    dp[ind][pick] = a
    return a

def solve():
    
    n = int(input())  
    v = list(map(int, input().split()))  
    
    
    dp = [[-1 for _ in range(2)] for _ in range(n + 1)]  
    
    
    print(rec(0, 0, v, dp))


solve()
