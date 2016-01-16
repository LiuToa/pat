N=list(str(input()))

ans={'0':0,'1':0,'2':0,'3':0,'4':0,'5':0,'6':0,'7':0,'8':0,'9':0}

for x in N:
    ans[x]+=1

ans=sorted(ans.items(),key=lambda e:e[0])

for x,y in ans:
    if y==0:
        continue
    else:
        print"%c:%d"%(x,y)
