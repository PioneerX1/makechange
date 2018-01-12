#include <iostream>

int get_change(int m) {
  int tens = 0;
  int fives = 0;
  int ones = 0;
  int totalCoins = 0;

  if (m >= 10) {
    tens = m / 10;
    m = m % 10;
  }
  if (m >= 5) {
    fives = m / 5;
    m = m % 5;
  }
  if (m >= 1) {
    ones = m / 1;
  }

  totalCoins = tens + fives + ones;
  return totalCoins;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
