#pragma once
#include "Node.h"
using namespace std;

class AVL_Tree
{
private:
	Node* m_root;
	
public:
	//constructor
	AVL_Tree();
	AVL_Tree(int v);

	//destructor
	~AVL_Tree();

	//m_function
	void AVL_insert(int v); //clear
	void AVL_delete(int v);
	Node* AVL_search(int v);
	bool is_empty();
	void print(Node* r);

	Node* get_root()
	{
		return m_root;
	}
};