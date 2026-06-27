#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Vector {
    float x, y, z;
    void (*print) (struct Vector*);
    float* (*convertPolar) (struct Vector*);
} Vector;


float* convertPolar (Vector* v) {
    float x = v->x, y = v->y, z = v->z;
    double r     = sqrt (x * x + y * y + z * z);
    double theta = atan (y / x);
    double phi   = atan (sqrt (x * x + y * y) / z);
    float* arr   = (float*)malloc (3 * sizeof (float));
    arr[0]       = r;
    arr[1]       = theta;
    arr[2]       = phi;
    return arr;
}
void print (Vector* v) {
    printf (
    "X-Component : %f\nY-Component: %f\nZ-Component: %f\n", v->x, v->y, v->z);
    return;
}

Vector* create3DVector (float x, float y, float z) {
    Vector* v       = (Vector*)malloc (sizeof (Vector));
    v->x            = x;
    v->y            = y;
    v->z            = z;
    v->print        = print;
    v->convertPolar = convertPolar;
    return v;
}


int main () {

    Vector* myVector = create3DVector (2.0, 3.1, 6.9);
    myVector->print (myVector);
    float* polarVec = myVector->convertPolar (myVector);
    for (int i = 0; i < 3; i++) {
        printf ("%f\n", polarVec[i]);
    }
    return 0;
}
