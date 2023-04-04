#include <iostream>

int main() {
  
  double earth_weight;
  int fight_planet;

  std::cout << "Earth Weight: ";
  std::cin >> earth_weight;

  std::cout << "Enter planet you want to fight in: ";
  std::cin >> fight_planet;

  if (fight_planet == 1){
    std::cout << "Weight in Planet 1 is  " << earth_weight * 0.38 << "\n";
  } else if (fight_planet == 2){
    std::cout << "Weight in Planet 2 is  " << earth_weight * 0.91 << "\n";
  }  else if (fight_planet == 3){
    std::cout << "Weight in Planet 3 is  " << earth_weight * 0.38 << "\n";
  } else if (fight_planet == 4){
    std::cout << "Weight in Planet 4 is  " << earth_weight * 2.34 << "\n";
  } else if (fight_planet == 5){
    std::cout << "Weight in Planet 5 is  " << earth_weight * 1.06 << "\n";
  } else if (fight_planet == 6){
    std::cout << "Weight in Planet 6 is  " << earth_weight * 0.92 << "\n";
  } else if (fight_planet == 7){
    std::cout << "Weight in Planet 7 is  " << earth_weight * 1.19 << "\n";
  }
  else{
    std::cout << "Enter a valid planet\n";
  }
  
  
  
}
