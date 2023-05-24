#!/usr/bin/python3
"""
this is the `5-island_perimeter` module
this module specifys just one function
island_perimeter
"""


def island_perimeter(grid):
    """
    a function that returns the perimeter
    of an island decribed by the input grid
    """

    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 1
                if col < (len(grid[0]) - 1) and grid[row][col + 1] == 1:
                    perimeter -= 1
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 1
                if row < (len(grid) - 1) and grid[row + 1][col] == 1:
                    perimeter -= 1

    return perimeter
