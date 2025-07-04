#ifndef CELL_H
#define CELL_H

class Cell {
public:
    bool visited = false;
    bool walls[4] = { true, true, true, true }; // Top, Right, Bottom, Left
    bool isPath = false; // For marking cells in the hint path
};

#endif // CELL_H
