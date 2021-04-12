#include <iostream>


using std::cin;
using std::cout;
using std::endl;
using std::boolalpha;

const unsigned int MAX_POINTS = 100;

struct Route {
    char source[20];
    char destination[20];
    double length;
    unsigned int n_points;
    double x_points[MAX_POINTS];
    double y_points[MAX_POINTS];
    bool is_correct_geometry;
};

#include <cmath>

void check_geometry(Route *r) {
    double len = 0;
    for (int i = 1; i < r->n_points; i++) {
        len += sqrt((r->x_points[i] - r->x_points[i - 1]) * (r->x_points[i] - r->x_points[i - 1]) +
                    (r->y_points[i] - r->y_points[i - 1]) * (r->y_points[i] - r->y_points[i - 1]));
    }
    if(abs(len - r->length)<1e-6) r->is_correct_geometry = true;
    else r->is_correct_geometry = false;
}

int main() {
    Route r;
    cin >> r.source >> r.destination >> r.n_points >> r.length;
    for (int i = 0; i < r.n_points; ++i) {
        cin >> r.x_points[i] >> r.y_points[i];
    }

    check_geometry(&r);
    cout << boolalpha << r.is_correct_geometry << endl;
    return 0;
}