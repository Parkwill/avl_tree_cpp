#include <iostream>
#include "AVL_Tree.h"
using namespace std;

int main()
{
	AVL_Tree t;

	t.AVL_insert(11);
	t.AVL_insert(5);
	t.AVL_insert(3);
	t.AVL_insert(15);

	t.print(t.get_root());

	t.AVL_delete(15);

	cout << endl;
	t.print(t.get_root());

	return 0;
}