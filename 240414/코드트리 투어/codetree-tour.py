import sys; input = sys.stdin.readline
import heapq as h

command = int(input())
tem = list(map(int, input().split()))[1:]
n, m = tem[0], tem[1]
arr = [[] for _ in range(n+1)]
A = [[int(1e9)]*n for _ in range(n)]
for i in range(n):
    A[i][i] = 0  # 도시 자신에게 가는 비용은 0입니다.
tem = tem[2:]
for i in range(n):
    u, v, w = tem[i*3], tem[i*3+1], tem[i*3+2]
    # 양방향 간선에 대해 두 도시간 여러 간선이 주어질 수 있으므로 min 값으로 저장합니다
    A[u][v] = min(A[u][v], w)
    A[v][u] = min(A[v][u], w)
for i in range(n):
    for j in range(n):
        if i != j and A[i][j] != int(1e9):
            arr[i].append((j, A[i][j]))
        elif i != j and A[j][i] != int(1e9):
            arr[j].append((i, A[j][i]))
# print(A)
# for i in range(2,m*3,3):
#     a,b,c = tem[i],tem[i+1],tem[i+2]
#     arr[a].append((b,c))
#     arr[b].append((a,c))
def dik(start):
    d = [int(1e11)]*(n+1)
    d[start] = 0
    q = []
    h.heappush(q,(0,start))
    while q:
        dist, now = h.heappop(q)
        if d[now] < dist:
            continue
        for i in arr[now]:
            cost = dist + i[1]
            if cost < d[i[0]]:
                d[i[0]] = cost
                h.heappush(q, (cost, i[0]))
    return d
d = dik(0)
del_arr = set()
_map = []
for _ in range(command-1):
    com = list(map(int, input().split()))
    if com[0] == 200:
        cost = com[2] - d[com[3]]
        if cost < 0:
            h.heappush(_map,(100,com[1],com[3],com[2]))
        else:
            h.heappush(_map,(-cost,com[1],com[3],com[2]))
    elif com[0] == 400:
        while _map:
            tem = h.heappop(_map)
            if tem[1] in del_arr:
                continue
            if -tem[0] < 0:
                print(-1)
                h.heappush(_map,tem)
                break
            else:
                print(tem[1])
                break
        else:
            print(-1)
    elif com[0] == 300:
        del_arr.add(com[1])
    else:
        # print(d)
        d = dik(com[1])
        # print(d)
        tem = []
        for i in range(len(_map)):
            a,b,c,e = _map[i]
            if b in del_arr:
                continue
            cost = e - d[c]
            if cost < 0:
                h.heappush(tem,(100,b,c,e))
            else:
                h.heappush(tem,(-cost,b,c,e))
        _map = tem