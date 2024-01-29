from collections import deque

def bfs(matrix, start):
    visited = [False] * len(matrix)
    queue = deque()
    queue.append(start)
    visited[start] = True
    
    while queue:
        node = queue.popleft()
        print(node, end=" ")
        for i in range(len(matrix[node])):
            if matrix[node][i] == 1 and not visited[i]:
                queue.append(i)
                visited[i] = True

if __name__ == "__main__":
    matrix = [
        [0, 0, 0, 1, 1],
        [0, 0, 1, 1, 1],
        [0, 1, 0, 1, 0],
        [1, 1, 1, 0, 1],
        [1, 0, 1, 1, 0]
    ]
    bfs(matrix, 0)
