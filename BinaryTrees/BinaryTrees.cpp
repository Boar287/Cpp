#include "BinaryTree.h"

int main()
{
    BinaryTree Oak;
    Oak.AddItem(6,"Dudich");
    Oak.AddItem(3,"Ermolovich");
    Oak.AddItem(8,"Snetko");
    Oak.DeleteItem(6);
    Oak.DeleteItem(3);
    Oak.DeleteItem(8);
    for (int i = 0; i < 5; i++)
    {
        Oak.AddItem(i,"Dimas");
    }
    Oak.PrintNLR();
    cout << endl;
}


