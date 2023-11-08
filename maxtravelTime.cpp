#include <iostream>
#include <math.h>
using namespace std;

double euclidean_distance(int a1, int b1, int a2, int b2) {
    double distance = sqrt(((b2 - b1) * (b2 - b1)) + ((a2 - a1) * (a2 - a1)));
    return distance;
}

int max_travel_time(int speed, int X, int coordinates[][2]) {
    int max_distance = 0;

    for (int i = 0; i < X; i++) {
        for (int j = i + 1; j < X; j++) {
            double current_distance = euclidean_distance(coordinates[i][0], coordinates[i][1], coordinates[j][0], coordinates[j][1]);
            max_distance = max(max_distance, (int)current_distance);
        }
    }

    return max_distance * speed;
}

int main() {
    int speed, X;

    cout << "Enter speed of pizza delivery boy (units per minute): ";
    cin >> speed;

    cout << "Enter number of orders (X): ";
    cin >> X;

    int coordinates[X][2];

    cout << "Enter coordinates of each order (x, y)" << endl;
    for (int i = 0; i < X; i++) {
        cout << "Order " << i + 1 << ": ";
        cin >> coordinates[i][0] >> coordinates[i][1];
    }

    int max_travel_time_in_minutes = max_travel_time(speed, X, coordinates);
    cout << "Maximum traveling time in minutes: " << max_travel_time_in_minutes << endl;

    return 0;
}