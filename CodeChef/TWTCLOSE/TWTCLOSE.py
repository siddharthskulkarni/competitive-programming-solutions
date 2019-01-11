inp = list(map(int, input().split()))
n, k = inp[0], inp[1]

arr = [0] * (n + 1)
res = 0

for i in range(k):
    click = input().split()
    if not click[0] == 'CLOSEALL':    
        res -= arr[int(click[1])]
        arr[int(click[1])] = (arr[int(click[1])] + 1) % 2
        res += arr[int(click[1])]
    else:
        arr = [0] * (n + 1)
        res = 0
    print(res)        