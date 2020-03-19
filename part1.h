#include "virtual_hash.h"

#ifndef NW_PART1_H
#define NW_PART1_H

using namespace std;

class nick_hash : public virtual_hash
{
  public:
    nick_hash(bool verbose = false);
    ~nick_hash();
    void start_hash(const vector<double>&);
    void print();

  private:
    int hash(double);
    bool verbose;
};

#endif
