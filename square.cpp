#include "square.h" 
 Square::Square(int side) { this->side = side;  } 
  int Square::width() {  return side;  } 
  int Square::area() { return side*side; }
  int Square::perimeter() {  return 4*side; }