#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
  // TODO: NELEMENTS should be N_ELEMENTS
  int *b = new int[NELEMENTS];

  // TODO: Add missing semicolon
  std::cout << '1-100 ertekek duplazasa';

  // TODO: Add missing arguments
  for (int i = 0;)
  {
    b[i] = i * 2;
  }

  // TODO: Add exit condition
  for (int i = 0; i; i++)
  {
    // TODO: Mising semicolon, value is getting logged
    std::cout << "Ertek:"
  }

  std::cout << "Atlag szamitasa: " << std::endl;

  int atlag;

  // TODO: Replace ',' with a semicolon
  for (int i = 0; i < N_ELEMENTS, i++)
  {
    // TODO: Add missing semicolon
    atlag += b[i]
  }

  atlag /= N_ELEMENTS;
  std::cout << "Atlag: " << atlag << std::endl;
  return 0;
}
