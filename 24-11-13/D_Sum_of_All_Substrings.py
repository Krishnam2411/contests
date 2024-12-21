n = int(input())
s = input()

sum = 0

v = [int(x) for x in s]
for (i, x) in enumerate(v):
    v[i] = (i + 1) * x
    if i > 0:
        v[i] += v[i - 1]

for i in range(n):
    sum += ((10 ** i) * v[n - i - 1])

print(sum)