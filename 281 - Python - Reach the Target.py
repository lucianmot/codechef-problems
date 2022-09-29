# Python - Reach the Target
# Rating - 281

testCases = int(input())

for i in range(testCases):
    x,y = list(map(int, input().split(" ")))
    print(x - y)
