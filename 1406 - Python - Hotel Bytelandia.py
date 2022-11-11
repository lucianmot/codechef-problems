# Python - Hotel Bytelandia
# Rating - 1406
# https://www.codechef.com/problems/HOTEL

t=int(input())
for _ in range(t):
    n=int(input())
    arrival=list(map(int,input().split()))
    depature=list(map(int,input().split()))
    ans=n
    arrival.sort()
    depature.sort()
    for i in depature:
        for j in arrival:
            if ( i <= j ):
                arrival.remove(j)
                ans-=1
                break
    print(ans)