#!/usr/bin/python3
"""
function that returns the perimeter of an island
represented by a grid
"""


def island_perimeter(grid):
    """
    calculates the perimeter of a grid
    """
    height = 0
    width = 0

    for line in grid:
        if 1 in line:
            _sum = 0
            height += 1
            for i in line:
                if i == 1:
                    _sum += 1
            if _sum > width:
                width = _sum

    perimeter = (height + width) * 2
    return perimeter
