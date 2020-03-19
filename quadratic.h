#include "virtual_hash.h"

#ifndef NW_QUADRATIC_H
#define NW_QUADRATIC_H

using namespace std;

class quadratic_hash : public virtual_hash
{
  public:
    quadratic_hash(bool verbose = false, int c1 = 1, int c2 = 2);
    ~quadratic_hash();
    void start_hash(const vector<double>&);
    void print();

  private:
    int hash(double);
    int c1;
    int c2;
    bool verbose;
};

#endif
