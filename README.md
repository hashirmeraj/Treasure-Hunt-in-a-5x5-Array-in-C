========================================
    Treasure Hunt Program In C Language
========================================

Overview
----------------------------------------
This program is designed to simulate a treasure hunt within a 5x5 grid. Each cell in the grid contains a clue, represented by a two-digit integer. The tens digit of the integer indicates the row, and the units digit indicates the column of the next cell to explore. The goal is to find the treasure, which is located in the cell where the clue's value matches its coordinates.

How It Works
----------------------------------------
- The program starts at the top-left corner of the grid (position 1,1).
- It reads the integer in that cell to determine the next cell to visit.
- This process continues until the program finds a cell where the value matches its coordinates, indicating the location of the treasure.
- The program outputs all the cells it visits during the search and announces the location of the treasure.

Input
----------------------------------------
- The treasure map data is provided as a 5x5 array of integers.

Output
----------------------------------------
- The program will display the sequence of cells visited during the treasure hunt.
- It will also print the location of the treasure once it is found.

========================================
