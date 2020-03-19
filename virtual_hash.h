#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <random>

using namespace std;

class virtual_hash
{
  protected:
    vector<double> hash_table;
    int round;

  public:
    virtual_hash(int size = 0, int seq = 0) : round{seq}
      { hash_resize(size); }
    ~virtual_hash()
      { if(!hash_table.empty()) hash_table.clear(); }
    void hash_resize(int num)
      { hash_table.resize(num); }
    int getSize()
      { return hash_table.size(); }
    int getRound()
      { return round; }
    double get_val_at(int i)
      { return hash_table.at(i); }
    void addRound()
      { round += 1; }
    void resetRound()
      { round = 0; }
    void insert_val_at(int i, double j)
      { hash_table.at(i) = j; }
    vector<double> get_random_doubles(int size)
    {
      vector<double> dubs;
      random_device randseed;
      mt19937 mount(randseed());
      uniform_real_distribution<double> 
        range(0.000000000465661, 2147483648);

      for(int i = 0; i < size; i++)
      { dubs.push_back(range(mount)); }

      return dubs;
    }
    virtual int hash(double) = 0;
};
