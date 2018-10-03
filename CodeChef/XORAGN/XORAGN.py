t = int(input())
while t > 0:
    n = int(input())
    arr = list(map(int, input().split()))
    xor = 0
    for value in arr:
        xor ^= value
    print(2 * xor)
    t -= 1