#include <iostream>
using namespace std;

int main() {
  //In C++ ci sono vari tipi di operatori
  // Gli operatori aritmetici sono +, -, *, /, %
  // Gli operatori di confronto sono ==, !=, <, >, <=, >=
  // Gli operatori logici sono &&, ||, !
  // Gli operatori di assegnazione sono =, +=, -=, *=, /=, %=
  // Gli operatori bitwise sono &, |, ^, ~, <<, >>
  // Gli operatori di incremento e decremento sono ++, --
  // Gli operatori ternari sono ?:
  
  //Questi sono gli operatori aritmetici
  int sum1 = 100 + 50;        // 150 (100 + 50)
  int diff = 100 - 50;        // 50 (100 - 50)
  int prod = 100 * 2;         // 200 (100 * 2)
  int div = 100 / 4;          // 25 (100 / 4)
  int mod = 100 % 30;         // 10 (resto della divisione 100 / 30)
  cout << "Somma: " << sum1 << "\n";
  cout << "Differenza: " << diff << "\n";
  cout << "Prodotto: " << prod << "\n";
  cout << "Divisione: " << div << "\n";
  cout << "Modulo: " << mod << "\n";

  // Operatori di confronto
  int a = 10, b = 3;
  cout << "a == b: " << (a == b) << "\n";     // 0 (false)
  cout << "a != b: " << (a != b) << "\n";     // 1 (true)
  cout << "a > b: " << (a > b) << "\n";       // 1 (true)
  cout << "a < b: " << (a < b) << "\n";       // 0 (false)
  cout << "a >= b: " << (a >= b) << "\n";     // 1 (true)
  cout << "a <= b: " << (a <= b) << "\n";     // 0 (false)

  // Operatori logici
  bool x = true, y = false;
  cout << "x && y: " << (x && y) << "\n";     // 0 (false)
  cout << "x || y: " << (x || y) << "\n";     // 1 (true)
  cout << "!x: " << (!x) << "\n";             // 0 (false)

  // Operatori di assegnazione
  int c = 5;
  c += 3; // c = c + 3
  cout << "c dopo c += 3: " << c << "\n";     // 8
  c *= 2; // c = c * 2
  cout << "c dopo c *= 2: " << c << "\n";     // 16

  // Operatori di incremento e decremento
  int d = 10;
  cout << "d++: " << d++ << "\n";             // 10 (prima usa, poi incrementa)
  cout << "++d: " << ++d << "\n";             // 12 (prima incrementa, poi usa)
  cout << "d--: " << d-- << "\n";             // 12 (prima usa, poi decrementa)
  cout << "--d: " << --d << "\n";             // 10 (prima decrementa, poi usa)

  // Operatori ternari
  int e = 20;
  string result = (e > 10) ? "Maggiore di 10" : "Minore o uguale a 10";
  cout << "Risultato operatore ternario: " << result << "\n";

  // Operatori bitwise
  int f = 5, g = 3; // 5 = 0101, 3 = 0011 in binario
  cout << "f & g: " << (f & g) << "\n";       // 1 (0101 & 0011 = 0001)
  cout << "f | g: " << (f | g) << "\n";       // 7 (0101 | 0011 = 0111)
  cout << "f ^ g: " << (f ^ g) << "\n";       // 6 (0101 ^ 0011 = 0110)
  cout << "~f: " << (~f) << "\n";             // -6 (inversione dei bit)
  cout << "f << 1: " << (f << 1) << "\n";     // 10 (0101 << 1 = 1010)
  cout << "f >> 1: " << (f >> 1) << "\n";     // 2 (0101 >> 1 = 0010)

  return 0;
}
