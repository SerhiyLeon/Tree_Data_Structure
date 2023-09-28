// Serhiy Leonchyk
//
// Program: P6 Tree Data Structure
//
// Class Section A
//
// Description: This is a class uses functions to create a
// tree data structure, which helps with fast data retrieval.
// Each node has a left and a right pointer, the right points
// to data that is greater, and the left points to data that
// is smaller. The << operator calls the print function which
// uses recursion to output the data in order from smallest
// to greatest. It also outputs where in the tree the data is
// placed, for example "going left... going right". After
// which it returns wether it was able to insert the data
// into the tree.
#ifndef TREE_H
#define TREE_H
#include <iostream>
using namespace std;
class Tree {
public:
class Node {
public:
Node() : left(nullptr), right(nullptr), data(0) {}
Node(int val) : left(nullptr), right(nullptr), data(val) {}
int data;
Node* left, * right;
};
Tree() : count(0), root(nullptr) {}
bool insert(int newVal);
friend ostream& operator << (ostream& str, const Tree& tree); // calls
print and
//
outputs count
int getCount();
private:
void print(ostream& ostr, Node* curNode) const; // recursive function
Node* root;
int count;
};
#endif
