# Python - Ranklist Pages
# Rank - 590
# https://www.codechef.com/submit/RANKLISTPAGE

import math

testCases = int(input())

for i in range(testCases):
    rank = int(input())
    print(math.ceil(rank/25))
