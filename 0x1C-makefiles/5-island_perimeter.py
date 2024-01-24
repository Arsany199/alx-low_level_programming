#!/usr/bin/python3
"""define module 5-island_perimeter"""


def island_perimeter(grid):
    """return the perimeter of the island in grid"""

    a = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for i, rad in enumerate(grid):
        for j, n in enumerate(rad):
            if n == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    a += 1
                if j == 0 or grid[i][j - 1] != 1:
                    a += 1
                if j == width or grid[i][j + 1] != 1:
                    a += 1
                if i == length or grid[i + 1][j] != 1:
                    a += 1
    return a
