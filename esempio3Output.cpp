#include <iostream>
using namespace std;

int main() {
  cout << "Hello World! \n";
  cout << "I am learning C++";
  
  cout << 3;
  return 0;

// Creo alcune variabili
int items = 50;
double cost_per_item = 9.99;
double total_cost = items * cost_per_item;
char currency = '$';

// Stampo il contenuto delle variabili e vado a capo
cout << "Number of items: " << items << "\n";
cout << "Cost per item: " << cost_per_item << currency << "\n";
cout << "Total cost = " << total_cost << currency << "\n";

}