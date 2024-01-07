 #include <iostream> 
 #include "square.h" 
  int main() 
  { 
    Square square(5); 
     std::cout << "Square with width " << square.width()  << " has an area of " << square.area() << " and a perimeter of "  << square.perimeter() << '\n'; 
     
  }