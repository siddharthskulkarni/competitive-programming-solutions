t = int(input())
for i in range(t):
    inp = list(map(int, input().split()))
    m = inp[0]
    n = inp[1]
    inp = list(map(int, input().split()))
    rx = inp[0]
    ry = inp[1]
    move_len = int(input())
    moves = input()
    cntu = cntd = cntr = cntl = 0
    for ch in moves:
        if ch == 'U':
            cntu += 1
        elif ch == 'D':
            cntd += 1
        elif ch == 'R':
            cntr += 1
        elif ch == 'L':
            cntl += 1
    if cntl > cntr or cntd > cntu:
        print("Case " + str(i + 1) + ": DANGER")
    elif cntr - cntl > m or cntu - cntd > n:
        print("Case " + str(i + 1) + ": DANGER")
    elif cntr - cntl == rx and cntu - cntd == ry:
        print("Case " + str(i + 1) + ": REACHED")
    else:
        print("Case " + str(i + 1) + ": SOMEWHERE")
        