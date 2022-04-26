Question: You just returned from visiting South America.
Convert currencies from Colombia, Brazil, and Peru into USD, and get the total amount in USD.
  Colombia 1 Peso = 0.049;
  Brazilian 1 Real = 0.21;
  Peruvian 1 Sol = 0.27;
 
---
  #include <iostream>

int main() {
  double pesos;
  double reals;
  double soles;
  double dollars;

  double conversionRate1 = 0.049;
  double conversionRate2 = 0.21;
  double conversionRate3 = 0.27;
  //1 pesos = 0.049 usd
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  //1 real = 0.21 usd
  std::cout << "Enter number of Brazilian Reals: ";
  std::cin >> reals;
  //1 sole = 0.27 usd
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  dollars = (conversionRate1*pesos) + (conversionRate2*reals) + (conversionRate3*soles);

  std::cout<< "US Dollars = $ "<<dollars;
  
  return 0;

  

  
}
