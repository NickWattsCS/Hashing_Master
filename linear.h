#include "virtual_hash.h"

#ifndef NW_LINEAR_H
#define NW_LINEAR_H

using namespace std;

class linear_hash : public virtual_hash
{
  public:
    linear_hash(bool verbose = false);
    ~linear_hash();
    void start_hash(const vector<double>&);
    void print();

  private:
    int hash(double);
    bool verbose;
};

#endif
