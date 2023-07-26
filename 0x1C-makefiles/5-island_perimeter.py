#!/usr/bin/python3
def island_perimeter(grid):
    """
        Returns the perimeter of the island described in grid:
        grid is a list of list of integers:
            One cell is a square with side length 1
            Grid cells are connected horizontally/vertically (not diagonally)
            Grid is rectangular, width and height don't exceed 100
        Grid is completely surrounded by water
        The island doesn't have “lakes”
    """
    water = 0
    size = 0
    width = len(grid[0])
    height = len(grid)

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    water += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    water += 1
    return size * 4 - water * 2
