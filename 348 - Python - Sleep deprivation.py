# Python - Sleep deprivation
# Rating - 348

testCases = int(input())

for i in range(testCases):
    sleep = int(input())
    print("YES") if sleep < 7 else print("NO")
