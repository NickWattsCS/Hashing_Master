#include "part1.h"

using namespace std;

int main()
{

  return 0;
}

nick_hash::nick_hash(bool print)
  :  virtual_hash{1000000, 0}, verbose{print}
{ }

nick_hash::~nick_hash()
{
  if(!hash_table.empty())
    hash_table.clear();
}

void nick_hash::start_hash(const vector<double>& vec)
{
}

int nick_hash::hash(double num)
{
}

void nick_hash::print()
{
}
