#include <iostream>
#include <vector>
#include "Punct2D.h"
#include "Punct3D.h"

using namespace std;

int main() {
    int n, m;

    cout << "Nr instante pt punct 2d";
    cin >> n;

    vector<Punct2D> puncte2DVector;
    for (int i = 0; i < n; ++i) {
        double x, y;
        cout << "Introdu datele pt x si y " << i + 1 << ": ";
        cin >> x >> y;
        puncte2DVector.push_back(Punct2D(x, y));
    }

    cout << "Introdu nr instante pt punct 3d";
    cin >> m;

    vector<Punct3D> puncte3DVector;
    for (int i = 0; i < m; ++i) {
        double x, y, z;
        cout << "Introdu x y si z pt pct 3d" << i + 1 << ": ";
        cin >> x >> y >> z;
        puncte3DVector.push_back(Punct3D(x, y, z));
    }


    return 0;
}
