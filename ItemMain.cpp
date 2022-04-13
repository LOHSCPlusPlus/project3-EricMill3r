#include "ItemDB.h"
#include <iostream>
#include "ReadUtils.h"
using namespace std;



const int MAX_MENU_LEN = 70;

void printMenu(char options[][MAX_MENU_LEN], int numEntries) {
    for (int index = 0; index < numEntries; index++) {
        cout << (index + 1) << ") " << options[index] << endl;
    }
}

int main() {
    CatDB dataBase;
    int option = 0;
    char menuOptions[][MAX_MENU_LEN]={  "Enter 1 to display the cat list",
                                        "Enter 2 to add a cat to the list",
                                        "Enter 3 to display cats by origin",
                                        "Enter 4 to Remove a cat from the list",
                                        "Enter 5 to Reload database from the file",
                                        "Enter 6 to print database",
                                        "Enter 7 to Quit"};
    dataBase.readCats();
    do {
        printMenu(menuOptions,7);
        option = readInt("Please select an option: ");
        switch(option) {
            case 1:
                dataBase.printArrayToScreen();
                break;
            case 2:
                dataBase.add();
                break;
            case 3:
                dataBase.PrintCatsByOrigin();
                break;
            case 4:
                dataBase.removeCat();
                break;
            case 5:
                dataBase.readCats();
                break;
            case 6:
                dataBase.printArrayToFile("cats1.txt");
                break;
            case 7:
                break;
            default:
                cout << "Invalid option, try again" << endl;
                break;
        }
    }while(option != 7);
    
    return 0;
}

  


