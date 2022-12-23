# Python - Maximise the Tastiness
# Rating - 627
# https://www.codechef.com/problems/MAXTASTE

testCases = int(input())

for _ in range(0, testCases):
    a, b, c, d = map(int, input().split())
    if ( a > b ):
        x = a
    else:
        x = b
    if ( c > d ):
        y = c
    else:
        y = d
    
    print(x+y)