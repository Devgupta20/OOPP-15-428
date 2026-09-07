#include <iostream>
using namespace std;

class point {
    int x, y;

public:
    point(int x=0, int y=0): x{x}, y{y} {}

    void show() {
        cout  << x << ", " << y << endl;
    }

    friend point operator+(point t1, point t2); 
};

point operator+(point t1, point t2) {
    return point(t1.x + t2.x, t1.y + t2.y);
}

int main() {    
    point p(1, 2);
    point q(3, 4);

    p.show();
    q.show();

    point r=p + q;
    r.show();

    return 0;
}