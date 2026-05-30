/* ---------------------------------------------------------------------- */
/*  problem1.c                                                            */
/*                                                                        */
/*  This program calculated the distance between two points a plane.      */
#include <stdio.h>
#include <math.h>

int main(void) {

  // Declare Variables
  double x1;
  double y1;
  double x2;
  double y2;
  double side1;
  double side2;
  double distance;

  // Variable Assignment
  x1 = 1;
  y1 = 5;
  x2 = 4;
  y2 = 7;
  side1 = x2 - x1;
  side2 = y2 - y1;
  distance = sqrt(side1 * side1 + side2 * side2);

  // Display result
  printf("The distance between the two points is: " "%5.2f \n",distance);

  // Exit Program
  return 0;
}

