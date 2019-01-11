inp = list(map(int, input().split()))
n, q = inp[0], inp[1]
arr = []
q_list = []
arr_hash = []
for i in range(3):
    arr_hash.append([0] * n)

for i in range(3):
    arr.append(list(map(int, input().split())))
    
for i in range(3):
    for j in range(n):
        arr_hash[i][arr[i][j]] = j 
    
key = list(map(int, input().split()))
    
for i in range(q):
    q_list.append(list(map(int, input().split())))
    
for i in range(q):
    pos_diff = []
    
    for j in range(3):
        #print(arr_hash[j][key[j]] - arr_hash[j][q_list[i][j]])
        temp = arr_hash[j][key[j]] - arr_hash[j][q_list[i][j]]
        if temp < 0:
            temp += n
        pos_diff.append(temp)
        
    if (pos_diff[0] + pos_diff[2]) % n == pos_diff[1]:
        print("YES")
    else:
        print("NO")
        
'''
print(arr, key, q_list)
print(arr_hash)
'''