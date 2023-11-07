#include <iostream>
using namespace std;

int main() 
{
  int r, r1, c, c1, ctr = 1; //r = rows, c = columns, ctr = counter

  cout << "MULTIPLICATION TABLE \n" << endl;
  cout << "Input Row/s: ";
  cin >> r1;
  cout << "Input Column/s: ";
  cin >> c1;

  for (r = 1; r <= r1; r++)
  {
    for (c = 1; c <= c1; c++)
    {
      cout << r * c << "\t";
      ctr++;
    }
    cout << "\n";
  }
  return 0;
}