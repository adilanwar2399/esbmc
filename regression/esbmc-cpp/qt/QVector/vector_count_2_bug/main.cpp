// QVector::size
#include <iostream>
#include <QVector>
#include <cassert>
using namespace std;

int main ()
{
  QVector<int> myints;
  cout << "0. count: " << (int) myints.count() << endl;
  assert(myints.count() == 0);
    myints.push_back(1);
    myints.push_back(2);
    myints.push_back(2);
    myints.push_back(2);
    myints.push_back(1);
  assert(myints.count(2) != 3);
  return 0;
}
