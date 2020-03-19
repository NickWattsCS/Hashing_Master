#include "quadratic.h"

using namespace std;

int main()
{

  return 0;
}

quadratic_hash::quadratic_hash(bool print, int num1, int num2)
  :  virtual_hash{1000000, 0}, verbose{print}, c1{num1}, c2{num2}
{ }

quadratic_hash::~quadratic_hash()
{
  if(!hash_table.empty())
    hash_table.clear();
}

void quadratic_hash::start_hash(const vector<double>& vec)
{
}

int quadratic_hash::hash(double num)
{
}

void quadratic_hash::print()
{
}
