#include "double.h"

using namespace std;

int main()
{

  return 0;
}

double_hash::double_hash(bool print)
  :  virtual_hash{1000000, 0}, verbose{print}
{ }

double_hash::~double_hash()
{
  if(!hash_table.empty())
    hash_table.clear();
}

void double_hash::start_hash(const vector<double>& vec)
{
}

int double_hash::hash(double num)
{
}

int double_hash::second_hash(double num)
{
}

void double_hash::print()
{
}
