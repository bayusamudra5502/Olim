# Solusi Python
# ? Link : https://codeforces.com/contest/1354/problem/A?locale=en

import math

tc = int(input())

for i in range(tc):
    a,b,c,d = input().split(" ")
    a = int(a)
    b = int(b)
    c = int(c)
    d = int(d)

    if(b >= a):
        print(b)
    else:
        add = c-d
        if(add > 0):
            n = int(math.ceil((a-b) / add))
            print(n*c+b)
        else:
            print(-1)
