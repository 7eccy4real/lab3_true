#include "Header1.h"
#include "Header2.h"
#include "Header3.h"
#include "Header4.h"

void testTriangle() {
    Triangle tr(10, 2);
    tr.ShowInfo();
}

void testTriangularPyramid() {
    TriangularPyramid tp(10, 2, 8);
    tp.ShowInfo();
}

void testCircle() {
    Circle c(5);
    c.ShowInfo();
}

void testCylinder() {
    Cylinder cy(5, 8);
    cy.ShowInfo();
}

int main() {
    testTriangle();
    testTriangularPyramid();
    testCircle();
    testCylinder();
    return 0;
}