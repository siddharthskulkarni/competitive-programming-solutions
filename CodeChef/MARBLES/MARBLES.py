from fractions import Fraction


def fact(n, r):
    r = min(r, n - r)
    prod = 1
    for i in range(0, r):
        prod *= Fraction(n - i, r - i)
    return prod


t = int(input())

for i in range(t):
    inp = list(map(int, input().split()))
    n, k = inp[0], inp[1]
    if n >= k:    
        print(int(fact(n - 1, k - 1)))
    else:
        print(0)