#include <iostream>
using namespace std;

struct helper {
    int x;
    int y;
    int z;
};

int manhattanComputation (helper firstPoint, helper secondPoint) {
   return(secondPoint.x - firstPoint.x) + (secondPoint.y - firstPoint.y) + (secondPoint.z - firstPoint.z);
}

int main() {
    int T;
    int N;
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> N;
        helper storage[N];
        for(int j = 0; j < N; j++) {
            cin >> storage[j].x >> storage[j].y >> storage[j].z;
        }
        for (int k = 0; k < N - 1; k++) {
            cout << manhattanComputation(storage[k], storage[k+1]) << endl;
        }
        cout << endl;
    }
    return 0;
}