#!/usr/bin/python3
"""
    A function to calculate the permiter of a grid
"""


def island_perimeter(grid):
    """Calculate the perimeter of a grid"""
    rows = len(grid)
    columns = len(grid[0])
    perimeter = 0
    for row in range(rows):
        for column in range(columns):
            if 0 <= row < rows and 0 <= column < columns:
                land_cell = grid[row][column]
                if land_cell == 1:
                    if row == 0 or grid[row-1][column] == 0:
                        perimeter += 1
                    if row == rows - 1 or grid[row+1][column] == 0:
                        perimeter += 1
                    if column == 0 or grid[row][column-1] == 0:
                        perimeter += 1
                    if column == columns - 1 or grid[row][column+1] == 0:
                        perimeter += 1

    return perimeter
