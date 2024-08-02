#include<bits/stdc++.h>
#include <utility>
using namespace std;
typedef pair<int, int> Point;
int main(){
    int numSoldiers;
    cout << "Run Program :" << endl;
    cout << "find_my_home_castle soldiers ";
    cin >> numSoldiers;

    vector<Point> soldiers(numSoldiers);
    set<Point> soldierSet;
    for (int i = 0; i < numSoldiers; ++i) {
        int x, y;
        cout << "Enter coordinates for soldier " << i + 1 << ": ";
        cin >> x >> y;
        soldiers[i] = {x, y};
        soldierSet.insert({x, y});
    }

    Point start;
    cout << "Enter the coordinates for your “special” castle: ";
    cin >> start.first >> start.second;
    return 0;

}

