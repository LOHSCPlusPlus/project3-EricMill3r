#include "ItemClass.h"
#include "ReadUtils.h"
#include <string.h>
#include <iostream>
#include <fstream>
using namespace std;


// checks if the origin is the same as the one entered
bool Cat::isSameOrigin(const char otherOrigin[]) {
    if(Origin == otherOrigin) {
            return true;
      }
      return false;
}


void printExample(ostream &out);
  const int MAX_CATS = 100;
 

// default constructor for cat 
  Cat::Cat(){
    for(int index = 0; index > MAX_CHAR_LEN; index ++) {
      name[index] = '\0';
      temperament[index] = '\0';
      Origin[index] = '\0';
      }
      minLifeSpan = 0.0;
      maxLifeSpan = 0.0;
      minWeight = 0.0;
      maxWeight = 0.0;
    }

// add cat display
void Cat::AddCat()
{

  cin.ignore(100, '\n');
  cout << "\nCat Breed: ";
      
  cin.getline(name, MAX_CATS);
  
  minLifeSpan = readDouble("\nEnter the cats minimum life span: ");
  
  maxLifeSpan = readDouble("Enter the max life span: ");
  
  minWeight = readDouble("Enter the minimum weight(lbs): ");
  
  maxWeight = readDouble("Enter the max weight(lbs): ");
      
  cout << "Enter the Origin: ";
  cin >> Origin;
  
  cout << "Enter the Temperament: ";
  cin >> temperament;
  
  cin.ignore(100,'\n');

}

// prints cat information
void Cat::printExample(ostream &out) {
  out << name << ";";
  out << minLifeSpan << ";";
  out << maxLifeSpan << ";";
  out << minWeight << ";";
  out << maxWeight << ";";
  out << temperament << ";";
  out << Origin << endl;
}

// reads cat information
void Cat::readcat(ifstream &inFile){
    inFile.get(name, Cat::MAX_CHAR_LEN, ';');
    inFile.ignore(100,';');
    inFile >> minLifeSpan;
    inFile.ignore(100,';');
    inFile >> maxLifeSpan;
    inFile.ignore(100,';');
    inFile >> minWeight;
    inFile.ignore(100,';');
    inFile >> maxWeight;
    inFile.ignore(100,';');
    inFile >> temperament;
    inFile.ignore(100,';');
    inFile >> Origin;
    inFile.ignore(100,'\n');
    // If we reached the end of the file while reading, then the entry is not valid
  
}