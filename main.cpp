/ Serhiy Leonchyk
//
// Program: P6 Tree Data Structure
//
// Class Section A
//
// Description: This prorgam uses the Tree Data Structure
// class to input numbers in a random order into a tree
// Whcih is then output in order from smallest to greatest
// to the console. Then the count it also output, which
// shows the amount of data points that are in the tree.
#include <iostream>
#include "Tree.h"
#include <iomanip>
using namespace std;
int main() {
Tree tree;
int temp;
cout << "What number would you like to insert into the tree? " << endl;
cout << "If you would like to stop inserting type '-1': ";
cin >> temp;
while (temp > 0)
{
if (temp > 0)
{
tree.insert(temp);
}
cout << "Enter Number: ";
cin >> temp;
}
cout << "\nThe numbers in the tree in ascending order are: " << endl;
cout << tree;
cout << "\nTotal Count: " << tree.getCount() << endl;
return 0;
}
