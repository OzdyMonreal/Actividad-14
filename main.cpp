#include <iostream>
#include "arreglo.h"
#include "computadora.h"

using namespace std;

int main() {
  Arreglo<Computadora> compus;

  Computadora c01("Personalizada", "Linux - Mint", "i7 8550u", 8);
  Computadora c02("Personalizada", "Windows 10 Pro", "i9 9900k", 64);
  Computadora c03("Mac Retina 2019", "macOS Big Sur", "i5 8250u", 16);
  Computadora c04("Personalizada", "Windows 10 Home", "Ryzen 7 2700x", 32);
  Computadora c05("Lenovo Yoga", "Linux - KDE Neon", "Ryzen 5 3500u", 4);

  compus << c01 << c02 << c03 << c04 << c05;
  Computadora c06("Personalizada", "Windows 10", "i9 9900k", 64);

  Computadora *ptr = compus.buscar(c06);

  cout << "Buscar:" << endl << *ptr << endl << endl << "Buscar todos:" << endl;


  Arreglo<Computadora*> ptrs = compus.buscar_todos(c06);

  if (ptrs.size() > 0) {
    for (size_t i = 0; i < ptrs.size(); i++)
    {
      Computadora *c = ptrs[i];
      cout << *c << endl;
    }
  }
  else {
    cout << "No existen coincidencias" << endl;
  }

  return 0;
}
