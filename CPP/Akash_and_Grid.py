_ = int(input())
while _>0:
    N,xs,ys = map(int,input().split())
    if (xs-ys)==0 or (xs-ys)%2==0:
        print("0")
    else:
        print("1")
    _-=1
    