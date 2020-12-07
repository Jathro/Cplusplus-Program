#include "ContactNode.h"
#include <iostream>
using namespace std;

// Constructor
ContactNode::ContactNode(string name, string phoneNumber, ContactNode* nextLoc) {
    this->contactName = name;
    this->contactPhoneNum = phoneNumber;
    this->nextNodePtr = nextLoc;
}

// Print Contact details
void ContactNode::PrintContactNode() {
    cout << "Name: " << contactName << endl
         << "Phone number: " << contactPhoneNum << endl << endl;
}

// Insert After node
void ContactNode::InsertAfter(ContactNode* ptrLoc) {
    ContactNode* tmpNext = nullptr;

    tmpNext = this->nextNodePtr;
    this->nextNodePtr = ptrLoc;
    ptrLoc->nextNodePtr = tmpNext;
}

// Get next of nextNodePtr
ContactNode* ContactNode::GetNext() {
    return this->nextNodePtr;
}