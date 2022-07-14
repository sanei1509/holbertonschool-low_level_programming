#!/usr/bin/python3
"task 5 interview"


def island_perimeter(grid):
    '''funcion para calcular el parametro'''
    filas = len(grid)
    if filas == 0 or len(grid[0]) == 0:
        return 0
    islands, superPos = 0, 0
    columnas = len(grid[0])
    for i in range(filas):
        for j in range(columnas):
            if (grid[i][j] == 1):
                islands += 1
                if (i < filas - 1 and grid[i + 1][j] == 1):
                    superPos += 1
                if (j < columnas - 1 and grid[i][j + 1] == 1):
                    superPos += 1
    return islands * 4 - superPos * 2
