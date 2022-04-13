#include <fstream>
#include <iostream>
using namespace std;


class Cat {
  
public: 
  
  Cat();
  void printExample(ostream &out);
  void readcat(ifstream &inFile);
  void AddCat();
  bool isSameOrigin(const char otherOrigin []);

private:
    enum {MAX_CHAR_LEN = 100};
    char name[MAX_CHAR_LEN];

    double minLifeSpan;
    double maxLifeSpan;
    double minWeight;
    double maxWeight;
    string temperament;
    string Origin;

};