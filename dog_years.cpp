#include <iostream>

int main() {
  
  // Declare int variable named dog_age, and set it equal to dog's age
  int dog_age = 26;
  // Declare three more int variables
  // The first two years of a dog's life count as 21 human years
  int early_years = 21; // Initialize variable to 21
  int later_years;
  int human_years;
  // Each following year counts as 4 human years;
  later_years = (dog_age - 2) * 4;
  // Add early_years and later_years together
  // Store in a variable named human_years
  human_years = (early_years + later_years);
  
  std::cout << "My name is Turts! Ruff, ruff, I am " << human_years << " years old in human years.\n";
}