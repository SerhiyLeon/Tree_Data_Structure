#include "Tree.h"
ostream& operator<<(ostream& outStrm, const Tree& tree)
{
tree.print(cout, tree.root);
return outStrm;
}
bool Tree::insert(int newVal)
{
Node* temp = new Node;
temp->data = newVal;
bool insertCheck = false;
// If the tree is empty then it makes the first number the root
if (root == nullptr)
{
root = temp;
insertCheck = true;
count++;
}
// If the tree only has one member
if (root->left == nullptr && root->right == nullptr)
{
// If it is less than, then it puts it to the left
if (temp->data < root->data)
{
root->left = temp;
cout << "Going Left" << endl;
insertCheck = true;
count++;
}
// If temp is greater than root, then it is put to the right
else if (temp->data > root->data)
{
root->right = temp;
cout << "Going Right" << endl;
insertCheck = true;
count++;
}
}
// If the tree has more than one member
else
{
// Temporary iterator to help move through the tree
Node* iterator = root;

// Will iterate until temp is inserted somewhere
while (insertCheck == false && temp->data != iterator->data)
{
// If the data in both is equal
//if (iterator->data == temp->data)
//{
// Empty loop
//}
// If temp is less than the iterator and the left one of the
iterator is empty
if (temp->data < iterator->data && iterator->left == nullptr)
{
iterator->left = temp;
cout << "Going Left" << endl;
insertCheck = true;
count++;
}
// If temp is greater than the iterator and the right one of
the iterator is empty
else if (temp->data > iterator->data && iterator->right ==
nullptr)
{
iterator->right = temp;
cout << "Going Right" << endl;
insertCheck = true;
count++;
}
// If temp is less than the iterator and the left one of the
iterator isn't empty
else if (temp->data < iterator->data)
{
iterator = iterator->left;
cout << "Going Left" << endl;
}
// If temp is greater than the iterator and the right one of
the iterator isn't empty
else if (temp->data > iterator->data)
{
iterator = iterator->right;
cout << "Going Right" << endl;
}
}
}
cout << "Inserted: " << boolalpha << insertCheck << endl;
// Return whether it successfully inserted the Node
return insertCheck;
}
int Tree::getCount()
{
return count;
}
void Tree::print(ostream& ostr, Node* curNode) const
{
// If the current node is empty
if (curNode == nullptr)
{
// We go back to whoever called us
return;
}
// Call print on everything to the left, that are smaller than us
print(ostr, curNode->left);
// Output ourselves to the output stream
ostr << curNode->data << ' ';
// Call Print on everything to the right, that are greater than us
print(ostr, curNode->right);
return;
};  
