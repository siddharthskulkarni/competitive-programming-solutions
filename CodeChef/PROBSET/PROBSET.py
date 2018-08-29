t = int(input())
while t > 0:
    inp = input()
    inp = inp.split()
    n = int(inp[0])
    m = int(inp[1])
    inp_list = []
    for i in range(n):
        inp_list.append(input())
    flag = 0
    for i in range(n):
        inp = inp_list[i].split()
        if inp[0] == "correct" and '0' in inp[1]:
            flag = 1
            break
        if inp[0] == "wrong" and not '0' in inp[1]:
            flag = 2
    if flag == 1:
        print("INVALID")
    elif flag == 2:
        print("WEAK")
    else:
        print("FINE")
    t -= 1