#!/usr/bin/python3
"""Defines a function that computes an island perimeter"""


def island_perimeter(grid):
    """Return the perimiter of an island described in grid.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """

    height, width = len(grid), len(grid[0])
    edge, size = 0, 0

    for h in range(height):
        for w in range(width):
            if grid[h][w] == 1:
                size += 1
                if (w > 0 and grid[h][w - 1] == 1):
                    edge += 1
                if (h > 0 and grid[h - 1][w] == 1):
                    edge += 1
    return (size * 4) - (edge * 2)
