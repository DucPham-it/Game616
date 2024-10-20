#include "main.h"

class Map {
private:
    int** map;
    int height;
    int width;
public:
    Map();
    ~Map();
    bool canPlace();
};