#!/usr/bin/python3
"""finds and returns the perimeter"""

def island_perimeter(grid):
    """returns perimeter of island
    grid: (0) represents water zone
          (1) represents land zone
          """
    per=1
    for i in grid:
        for j in i:
            if j == 1:
                per += 1
    return 2*per

