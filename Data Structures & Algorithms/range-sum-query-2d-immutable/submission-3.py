class NumMatrix:

    def __init__(self, matrix: List[List[int]]):
        rows = len(matrix)
        columns = len(matrix[0])
        self.pre_sum = [[0] * (columns + 1) for _ in range(rows + 1)] 
        pre = self.pre_sum
        for i in range(rows):
            for j in range(columns):
                pre[i + 1][j + 1] = pre[i][j + 1] + pre[i + 1][j] + matrix[i][j] - pre[i][j]

    def sumRegion(self, row1: int, col1: int, row2: int, col2: int) -> int:
        pre = self.pre_sum
        return pre[row2 + 1][col2 + 1] - pre[row2 + 1][col1] - pre[row1][col2 + 1] + pre[row1][col1]


# Your NumMatrix object will be instantiated and called as such:
# obj = NumMatrix(matrix)
# param_1 = obj.sumRegion(row1,col1,row2,col2)