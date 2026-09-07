#include <iostream>
using namespace std;

class point {
    int x, y;

public:
    point(int x=0, int y=0): x{x}, y{y} {}

    void show() {
        cout  << x << ", " << y << endl;
    }

    point operator+(point t) {
        return point(x + t.x, y + t.y);
    }

};

int main() {    
    point p(1, 2);
    point q(3, 4);

    p.show();
    q.show();

    point r=p + q;
    r.show();

    return 0;
}