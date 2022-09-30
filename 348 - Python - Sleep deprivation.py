# Python - Sleep deprivation
# Rating - 348
# https://www.codechef.com/LTIME112D/problems/SLEEP

testCases = int(input())

for i in range(testCases):
    sleep = int(input())
    print("YES") if sleep < 7 else print("NO")
