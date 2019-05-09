#include <iostream>
#include <cmath>

int main() {
  
  // Declare three variables
  double a, b, c;
  double root1, root2;
  
  // Prompt user for input
  std::cout << "Enter a: ";
  // Store input in variable a
  std::cin >> a;
  std::cout << "Enter b: ";
  std::cin >> b;
  std::cout << "Enter c: ";
  std::cin >> c;
  
  // Equation for root1
  root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);  
  
  // Output values of root1
  std::cout << "The value of Root1 is " << root1 << "\n";
  
  // Equation for root2
  root2 = (-b - std::sqrt(b*b-4*a*c)) / (2*a);
  std::cout << "The value of Root2 is " << root2;
}