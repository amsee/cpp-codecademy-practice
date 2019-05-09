#include <iostream>

int main() {
  
  // Declare three variables
  double pesos, pesosToDollars;
  double reais, reaisToDollars;
  double soles, solesToDollars;
  double dollars;
  
	std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Colombian Reais: ";
  std::cin >> reais;
	std::cout << "Enter number of Colombian Soles: ";
  std::cin >> soles;
  
  // Pesos conversion rate: 0.00032
  pesosToDollars = pesos * 0.00032;
  // Reais conversion rate: 0.27
  reaisToDollars = reais * 0.27;
  // Soles conversion rate: 0.30
  solesToDollars = soles * 0.3;
  
  // Calculate for total USD
  dollars = (pesosToDollars + reaisToDollars + solesToDollars);
  
  // Display total amount of USD
  std::cout << "US Dollars = $" << dollars << "\n";
}