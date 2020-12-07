/*
Name: Peter Slusarz
Date: 11/29/2020
*/

#include <iostream>
using namespace std;
#include "ContactNode.h"

int main() {
    ContactNode* headObj = nullptr;
    ContactNode* contact1 = nullptr;
    ContactNode* contact2 = nullptr;
    ContactNode* contact3 = nullptr;
    ContactNode* lastObj = nullptr;
    string nameInput;
    string phoneNumberInput;

    headObj = new ContactNode("HEADOBJ", "");
    lastObj = headObj;

    cout << "Person 1" << endl << "Enter name:" << endl;
    getline(cin, nameInput);
    cout << "Enter phone number:" << endl;
    getline(cin, phoneNumberInput);

    cout << "You entered: " << nameInput << ", " << phoneNumberInput << endl;
    contact1 = new ContactNode(nameInput, phoneNumberInput);

    lastObj->InsertAfter(contact1);
    lastObj = contact1;

    cout << "\nPerson 2" << endl << "Enter name:" << endl;
    getline(cin, nameInput);
    cout << "Enter phone number:" << endl;
    getline(cin, phoneNumberInput);

    cout << "You entered: " << nameInput << ", " << phoneNumberInput << endl;
    contact2 = new ContactNode(nameInput, phoneNumberInput);

    lastObj->InsertAfter(contact2);
    lastObj = contact2;

    cout << "\nPerson 3" << endl << "Enter name:" << endl;
    getline(cin, nameInput);
    cout << "Enter phone number:" << endl;
    getline(cin, phoneNumberInput);

    cout << "You entered: " << nameInput << ", " << phoneNumberInput << endl;
    contact3 = new ContactNode(nameInput, phoneNumberInput);

    lastObj->InsertAfter(contact3);
    lastObj = contact3;
    
    cout << "\nCONTACT LIST" << endl;
    contact1->PrintContactNode();
    contact2->PrintContactNode();
    contact3->PrintContactNode();
    
    return 0;
}