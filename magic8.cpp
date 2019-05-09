#include <iostream>
#include <cstdlib>

int main() {

  std::cout << "MAGIC 8-BALL:\n\n";
	
  // Gets a different random number for each execution
  srand(time(NULL));
  
  int answer = std::rand() % 10;

  std::cout << answer;
  
  // Checks if the answer is equal to 0
  if (answer == 0) {
    std::cout << "\nIt is certain";
  }
  else if (answer == 1) {
    std::cout << "\nFries in your rice";
  }
  else if (answer == 2) {
    std::cout << "\nNope";
  }
  else if (answer == 3) {
   	std::cout << "\nHi";
  }
  else if (answer == 4) {
    std::cout << "\nWho knows";
  }
  else if (answer == 5) {
    std::cout << "\nGo with the flow";
  }
  else if (answer == 6) {
    std::cout << "\nBrb";
  }
  else if (answer == 7) {
    std::cout << "\nIdk";
  }
  else if (answer == 8) {
    std::cout << "\nForever";
  }
  else if (answer == 9) {
    std::cout << "\nNever";
  }
  else if (answer == 10) {
    std::cout << "\nVery doubtful";
  }
    
}