#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
};

float euclidean(struct point a, struct point b);
float manhattan(struct point a, struct point b);

int main() {
    struct point a;
    struct point b;

    printf("Enter the first point in the following format (#,#): ");
    scanf(" (%d,%d)", &a.x, &a.y);
    printf("Enter the second point in the following format (#,#): ");
    scanf(" (%d,%d)", &b.x, &b.y);

    printf("Distance via Euclidean: %f\n", euclidean(a, b));
    printf("Distance via Manhattan: %f\n", manhattan(a, b));

    return 0;
}

float euclidean(struct point a, struct point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

float manhattan(struct point a, struct point b) {
    return abs(a.x - b.x) + abs(a.y - b.y);
}