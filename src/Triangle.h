#ifndef _TRIANGLE_H
#define _TRIANGLE_H

typedef enum {
//   0        1          2           3         4
  UNKNOWN, ILLEGAL, EQUILATERAL, ISOSCELES, SCALENE,
} TriangleType;

TriangleType getTriangleType(int side1, int side2, int side3);

#endif // _TRIANGLE_H
