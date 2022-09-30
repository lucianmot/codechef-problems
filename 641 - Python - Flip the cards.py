# Python - Flip the cards
# Rating - 641
# https://www.codechef.com/LTIME112D/problems/FLIPCARDS

testCases = int(input())

for i in range(testCases):
    n, x = list(map(int, input().split(" ")))
    if n == x:
        print("0")
    elif x < n - x:
        print(x)
    else:
        print(n - x)
