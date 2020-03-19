#include "linear.h"

using namespace std;

int main()
{
  linear_hash linear;
  vector<double> dubs = linear.get_random_doubles(linear.getSize());
  linear.start_hash(dubs);
  return 0;
}

linear_hash::linear_hash(bool print) 
  : virtual_hash{1000000, 0}, verbose{print}
{ }

linear_hash::~linear_hash()
{
  if(!hash_table.empty())
    hash_table.clear();
}

void linear_hash::start_hash(const vector<double>& vec)
{
  int i = 0;
  int element = 0;
  for(auto& num: vec)
  {
    insert_val_at(hash(num), num);
    resetRound();
    cout << "----------------------------\n";
  }
}

void linear_hash::print()
{
  for(auto& val: hash_table)
  {
    if(val != 0)
      cout << val << " ";
  }
  cout << endl;
}

int linear_hash::hash(double num)
{
  double target = 0;
  int int_target = 0;
  double A = (sqrt(5) - 1)/2;
  int m = static_cast<int>(pow(2.0, 13.0));

  while(1)
  {
    target = A*num;
    cout << fixed << showpoint << setprecision(10);
    cout << "Target: " << target << endl;
    cout << "Note: target should be floor of " << A << "*" << num << " at this point." << endl;
    int_target = target/1;
    cout << "Target as an int is " << int_target << endl;
    target -= int_target;
    cout << "kA (mod 1) = " << target << endl;
    target *= m;
    cout << "m*(kA (mod 1) ) = " << target << endl;
    int_target = target/1 + getRound();
    cout << "final hashed element of num is " << int_target << endl;
    /* USE MULTIPLICATION METHOD

       h(k) = floor( m*(kA (mod 1) ) )
         where A is real number | 0 < A < 1
               m is an integer | 2^p, where p is prime
         A should be irrational, where
           A = a + _1, b + _1, c + _1, d + ...
    */
    if(get_val_at(target) == 0)
    {
      if(int_target < 1000000)
        return int_target;
      else if(int_target >= 1000000)
      {
        int_target %= 1000000;
        return int_target;
      }
    }
    else
      addRound();
  }
}
