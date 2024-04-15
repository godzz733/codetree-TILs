import sys; input = sys.stdin.readline
n,m,k = map(int, input().split())
arr = [[0] * (m) for _ in range(n+3)]
ans = 0
def out(x):
    if x == 4: return 0
    if x == -1: return 4
    return x
def down(golem):
    global arr
    cnt = 0
    while golem[4][0] < n+2 and not arr[golem[1][0]+1][golem[1][1]] and not arr[golem[2][0]+1][golem[2][1]] and not arr[golem[4][0]+1][golem[4][1]]:
        cnt += 1
        golem[0][0] += 1
        golem[1][0] += 1
        golem[2][0] += 1
        golem[3][0] += 1
        golem[4][0] += 1
    for x,y in golem[:5]:
        arr[x][y] = 1
    return cnt
def left(golem):
    global arr
    cnt = 0
    for x,y in golem[:5]:
        arr[x][y] = 0
    if golem[1][1] > 0 and not arr[golem[1][0]][golem[1][1]-1] and not arr[golem[3][0]][golem[3][1]-1] and not arr[golem[4][0]][golem[4][1]-1]:
        cnt = 1
        golem[0][1] -= 1
        golem[1][1] -= 1
        golem[2][1] -= 1
        golem[3][1] -= 1
        golem[4][1] -= 1
        golem[5] = out(golem[5]-1)
    for x,y in golem[:5]:
        arr[x][y] = 1
    return cnt
def right(golem):
    global arr
    cnt = 0
    for x,y in golem[:5]:
        arr[x][y] = 0
    if golem[2][1] < m - 1 and not arr[golem[2][0]][golem[2][1]+1] and not arr[golem[3][0]][golem[3][1]+1] and not arr[golem[4][0]][golem[4][1]+1]:
        cnt = 1
        golem[0][1] += 1
        golem[1][1] += 1
        golem[2][1] += 1
        golem[3][1] += 1
        golem[4][1] += 1
        golem[5] = out(golem[5]+1)
    for x,y in golem[:5]:
        arr[x][y] = 1
    return cnt
def solve(a,b):
    global ans, arr
    # 중앙 왼쪽 오른쪽 위 아래
    golem = [[1,a],[1,a-1],[1,a+1],[0,a],[2,a],b]
    while 1:
        down(golem)
        t2 = left(golem)
        if t2: continue
        t3 = right(golem)
        if t3: continue
        break       
    for i in range(n+3):
        print(*arr[i])


solve(2,3)
# for _ in range(k):
#     a,b = map(int, input().split())
#     solve(a-1,b)