def dfs(matrix, start, visited):
    print(start, end=" ")
    visited[start] = True
    for i in range(len(matrix[start])):
        if matrix[start][i] == 1 and not visited[i]:
            dfs(matrix, i, visited)

if __name__ == "__main__":
    matrix = [
        [0, 0, 0, 1, 1],
        [0, 0, 1, 1, 1],
        [0, 1, 0, 1, 0],
        [1, 1, 1, 0, 1],
        [1, 0, 1, 1, 0]
    ]
    size = len(matrix)
    visited = [False] * size
    dfs(matrix, 0, visited)
