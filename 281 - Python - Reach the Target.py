# Python - Reach the Target
# Rating - 281
# https://www.codechef.com/submit/REACHTARGET

testCases = int(input())

for i in range(testCases):
    x,y = list(map(int, input().split(" ")))
    print(x - y)
