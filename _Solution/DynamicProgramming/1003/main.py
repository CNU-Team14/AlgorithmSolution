from sys import stdin

matrix = [[0, 0] for _ in range(41)]

def fibo(n):
    if matrix[n] != [0, 0]:
        return matrix[n]
    else:
        n_1 = fibo(n-1)
        n_2 = fibo(n-2)
        matrix[n] = [n_1[0] + n_2[0], n_1[1] + n_2[1]]
        return matrix[n]

def main():
    N = int(stdin.readline())
    matrix[0] = [1, 0]
    matrix[1] = [0, 1]
    
    for _ in range(N):
        n = int(stdin.readline())
        print(*fibo(n))

if __name__ == "__main__":
    main()