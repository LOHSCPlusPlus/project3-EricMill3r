#include "ItemDB.h"
#include <fstream>
#include <iostream>
#include "ReadUtils.h"
using namespace std;


// Cat DataBase default constructor
CatDB::CatDB(){
  numCats = 0;
  readCats();
}



// removes cat
void CatDB::removeCat()
{
  cout << "Enter index of cat to delete: " << endl;
  int delIndex;
  cin >> delIndex;
  for(int index = delIndex; index < delIndex; index ++){
    
    catArray[index] = catArray[index + 1];  
    
  }
  numCats --;
}
// prints cats of the origin entered by the user
void CatDB::PrintCatsByOrigin()
{
  char Origin[100];
  
  cout << "Enter Cat Origin: ";
  cin >> Origin;
  for(int index = 0; index < numCats; index ++){
    if (catArray[index].isSameOrigin(Origin)){
      cout << "index" << index << ": ";
       catArray[index].printExample(cout);
      cout << endl;
    }

  }
}
// displays cat list 
void CatDB::printArrayToScreen() {
  for (int index = 0; index < numCats; index++) {
    cout << "Index " << index << ": ";
    catArray[index].printExample(cout);
  }
}
// prints a new cat database
void CatDB::printArrayToFile(const char fileName[]) {
  ofstream outFile(fileName);
  for (int index = 0; index < numCats; index++) {
    catArray[index].printExample(outFile);
  }
}
// reads the cats from the file 

// reads every cat in file 
int CatDB::readCats() {
  ifstream catFile("cats.txt");
  numCats = 0;
  while(catFile.peek() != EOF && numCats < MAX_CATS) {
    catArray[numCats].readcat(catFile);
    numCats++;
  }
  return numCats;
}
// adds cat
void CatDB::add(){
  catArray[numCats].AddCat();
  numCats++;
}