def get_dis(x, y):
    return (x*x + y*y)**0.5;
    
t = int(input())

for i in range(t):
    rs, rh = map(int, input().split())
    n = int(input())
    rc=0
    yc=0
    for j in range(n):
        x, y = map(int, input().split())
        td = get_dis(x,y)-rs
        
        if(td<=rh):
            rc+=1
    n = int(input())
    
    for j in range(n):
        x, y = map(int, input().split())
        td = get_dis(x,y)-rs
        
        if(td<=rh):
            yc+=1      
            
    print("case #"+str(i+1)+" "+str(rc)+" "+str(yc))
        
