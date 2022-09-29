# Python - Easy Pronunciation
# Rating - 1000
# https://www.codechef.com/submit/EZSPEAK

testCases = int(input())
goodLetter = ["a", "e", "i", "o", "u"]

for i in range(testCases):
    unimportant = input()
    word = str(input())
    consCount = 0
    for c in word:
        if consCount == 4:
            break
        elif c in goodLetter:
            consCount = 0
        else:
            consCount+=1
    
    if consCount == 4:
        print("NO")
    else:
        print("YES")
