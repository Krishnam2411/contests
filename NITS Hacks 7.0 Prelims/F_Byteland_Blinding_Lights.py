from sys import stdin
import math

def input():
    return stdin.buffer.readline().decode().strip()

def chk(a, b, v1, v2, x, y, tolerance=1e-9):
    A = float(v1) * v2
    B = float(v1) * y - float(v2) * x + float(v2) * a - float(v1) * b
    C = float(a) * y + float(b) * x - float(a) * b
    D = B * B - 4 * A * C

    if D < 0:
        return -1
    
    sqrtD = math.sqrt(D)

    if not math.isclose(A, 0, abs_tol=tolerance):
        t1 = (-B + sqrtD) / (2 * A)
        t2 = (-B - sqrtD) / (2 * A)
    else:
        if not math.isclose(B, 0, abs_tol=tolerance):
            t1 = t2 = -C / B
        else:
            return -1

    if t1 >= 0 and t2 >= 0:
        return min(t1, t2)
    elif t1 >= 0:
        return t1
    elif t2 >= 0:
        return t2

    return -1

def solve_case(a, b, v1, v2, n, coordinates):
    pegs = []
    
    for i, (x, y) in enumerate(coordinates):
        t = chk(a, b, v1, v2, x, y)
        if t != -1:
            pegs.append((t, x, i + 1))

    if not pegs:
        print(-1)
    else:
        pegs.sort(key=lambda peg: (peg[0], peg[1]))
        print(pegs[0][2])

def main():
    tc = int(input())
    for _ in range(tc):
        a, b, v1, v2 = map(int, input().split())
        n = int(input())
        coordinates = [tuple(map(int, input().split())) for _ in range(n)]
        solve_case(a, b, v1, v2, n, coordinates)

if __name__ == "__main__":
    main()
