t = int(input())
while t > 0:
    n,m = input().split()
    n = int(n)
    m = int(m)
    if n < m:
        n,m = m,n
    if n == 1 or m == 1:
        print(n * (n - 1))
    else:
        b = n * m
        print((b * (b - 1)) - (4 * (((n - 1)*(m - 2))+((m - 1)*(n - 2)))))
    t = t - 1