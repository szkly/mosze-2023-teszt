#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
  int *b = new int[N_ELEMENTS];

  std::cout << "1-100 ertekek duplazasa" << std::endl;

  for (int i = 0; i < N_ELEMENTS; i++)
  {
    b[i] = (i + 1) * 2;
  }

  for (int i = 0; i < N_ELEMENTS; i++)
  {
    std::cout << "Ertek: " << b[i] << std::endl;
  }

  std::cout << "Atlag szamitasa: " << std::endl;

  int atlag = 0;

  // TODO: Replace ',' with a semicolon
  for (int i = 0; i < N_ELEMENTS; i++)
  {
    // TODO: Add missing semicolon
    atlag += b[i];
  }

  atlag /= N_ELEMENTS;
  std::cout << "Atlag: " << atlag << std::endl;

  std::cout << "Written by someone else and not Karoly!! " << std::endl;

  return 0;
}
