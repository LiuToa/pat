judge={"JB":1,"BC":1,"CJ":1,"CC":2,"BB":2,"JJ":2,"BJ":0,"CB":0,"JC":0}
pingshou=0
win_A={'J':0,'C':0,'B':0}
win_B={'J':0,'C':0,'B':0}
k=0
l=0
n=int(input())
for x in range(n):
    a,b= raw_input().split(" ")
    c=a+b
    if judge[c]==0:
        win_B[b]+=1
    if judge[c]==1:
        win_A[a]+=1
    if judge[c]==2:
        pingshou+=1  
print sum(win_A.values()),pingshou, n-pingshou-sum(win_A.values())
print sum(win_B.values()),pingshou, n-pingshou-sum(win_B.values())
for x,y in win_A.items():
    if y>k:
        k=y
        max_win_a=x
    if y==k and x<max_win_a:
        max_win_a=x
for x,y in win_B.items():
    if y>=l:
        l=y
        max_win_b=x
    if y==l and x<max_win_b:
        max_win_b=x
print max_win_a,max_win_b
