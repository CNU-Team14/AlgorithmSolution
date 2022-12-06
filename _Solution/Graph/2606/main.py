graph = {}

v = int(input())
e = int(input())

visited = [0]*(v+1)

for i in range(1, v+1):
    graph[i] = []
    
for i in range(e):
    v1, v2 = map(int, input().split())
    graph[v1].append(v2)
    graph[v2].append(v1)
    
q = []

q.append(1)

while q:
    ver = q.pop()
    if visited[ver] == 0:
        visited[ver] = 1
        q += graph[ver]
        
print(sum(visited)-1)