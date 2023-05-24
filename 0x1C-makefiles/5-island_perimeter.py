#!/usr/bin/python3
"""
Function to calculate the perimeter of an island described in a grid.
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.

    Args:
        grid (list): A list of list of integers representing the grid.

    Returns:
        int: The perimeter of the island.

    """
    perimeter = 0

    if not grid:
        return perimeter

    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Count all sides as default

                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2  # Subtract 2 if adjacent cell in the same row is land

                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2  # Subtract 2 if adjacent cell in the same column is land

    return perimeter
