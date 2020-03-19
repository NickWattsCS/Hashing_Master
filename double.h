#include "virtual_hash.h"

#ifndef NW_DOUBLE_H
#define NW_DOUBLE_H

using namespace std;

class double_hash : public virtual_hash
{
  public:
    double_hash(bool verbose = false);
    ~double_hash();
    void start_hash(const vector<double>&);
    void print();

  private:
    int hash(double);
    int second_hash(double);
    bool verbose;
};

#endif
