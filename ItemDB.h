#include "ItemClass.h"
// cat DataBase class
class CatDB {


public: 
  
  CatDB();
  double readDouble();
  void add();    
  void removeCat();
  void PrintCatsByOrigin();
  void printArrayToScreen();
  void printArrayToFile(const char fileName[]);
  int readCats();
  

private:
    enum {MAX_CATS = 100};
    Cat catArray[MAX_CATS];
    int numCats;

};