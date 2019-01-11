from sys import stdin 

lookup_table = [0] * (10 ** 4)

def rec_cal(n):
    if n < 10 ** 4 and not lookup_table[n] == 0:
        return lookup_table[n]
    if n < 12:
        lookup_table[n] = n
        return n
    sum1 = rec_cal(int(n / 2))
    sum2 = rec_cal(int(n / 3))
    sum3 = rec_cal(int(n / 4))
    if n < 10 ** 4:    
        lookup_table[n] = sum1 + sum2 + sum3
    return sum1 + sum2 + sum3

lines = stdin.read().splitlines()
for i in range(len(lines)):
    print(rec_cal(int(lines[i])))
    
    