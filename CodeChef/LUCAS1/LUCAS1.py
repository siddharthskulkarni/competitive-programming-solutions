import string
t = int(input())
for test in range(t):
    s = input()
    hash_table = dict(zip((ch for ch in string.ascii_lowercase), [0] * 26))
    for ch in s:
        hash_table[ch] += 1
    arr = list(hash_table.values())
    arr.sort(reverse = True)
    for i in range(26):
        if arr[i] == 0:
            try:
                if arr[i - 1] == 1 and arr[i - 2] == 2:
                    arr[i - 1], arr[i - 2] = arr[i - 2], arr[i - 1]
                    break
            except:
                break
    #print(arr)
    flag = 1
    if not arr[0] == 1:
        if not arr[0] == 2:
            for i in range(26):
                if not arr[i + 2] == 0:
                    if not arr[i] == arr[i + 1] + arr[i + 2]:
                        flag = 0
                        break
                else:
                    if not (arr[i] == 1 and arr[i + 1] == 2):
                        flag = 0
                        break
                    else:
                        break
    else:
        if not arr[1] == 2:
            flag = 0
    if flag == 1:
        print("FIT")
    else:
        print("UNFIT")
   