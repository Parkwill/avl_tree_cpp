#include <iostream>
#include "AVL_Tree.h"
using namespace std;

int main()
{
	AVL_Tree t;

	t.AVL_insert(11);
	t.AVL_insert(5);
	t.AVL_insert(3);
	//t.AVL_insert(15);
	//t.AVL_insert(13);

	t.print(t.get_root());
	cout << "<Root : " << t.root_value() << '>' << endl;

	//t.AVL_delete(11);

	//t.print(t.get_root());
	//cout << "(Root : " << t.root_value() << ')' << endl;

	return 0;
}
