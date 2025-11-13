#include <iostream>
using namespace std;

class cube; // Forward declaration

class Box {
    int volume;
public:
    Box(int v) { volume = v; }
    friend void findGreater(Box, cube);
};

class cube {
    int volume;
public:
    cube(int v) { volume = v; }
    friend void findGreater(Box, cube);
};

void findGreater(Box b, cube c) {
    if (b.volume > c.volume)
        cout << "Box has greater volume\n";
    else
        cout << "cube has greater volume\n";
}

int main() {
    Box b(50);
    cube c(10);
    findGreater(b, c);
    return 0;
}
