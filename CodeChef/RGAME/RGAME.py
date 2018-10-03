mdl = 1000000007
t = int(input())
while t > 0:
    n = int(input())
    arr = list(map(int, input().split()))
    coeff = 2 * arr[0]
    term = 0
    power_of_2 = 2
    for i in range(1, n + 1):
        term = (term * 2 + coeff * arr[i]) % mdl
        coeff = (coeff + power_of_2 * arr[i]) % mdl
        power_of_2 = (power_of_2 * 2) % mdl
    print(term)
    t -= 1