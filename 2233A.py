import math
test = int(input())
while(test>0):
    n,x,y,z = map(int,input().split())
    without_ai = math.ceil((n / (x+y)))  # 1,1,1,1
    if math.ceil(n/x) <= z:
        with_ai = math.ceil(n/x)
    else:
        remaining = n - (x*z)
        if remaining <= 0:
            with_ai = z
        else:
            with_ai = z + math.ceil(remaining / (x+(10*y)))
    ans = min(with_ai,without_ai)
    print(ans)
    test-=1

