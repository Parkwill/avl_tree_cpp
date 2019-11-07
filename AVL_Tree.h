#pragma once
#include "Node.h"
using namespace std;

class AVL_Tree
{
private:
	Node* m_root;

	void _clear(Node* parent_node)
	{
		if (parent_node->left_child != NULL)
		{
			_clear(parent_node->left_child);
			parent_node->left_child = NULL;
		}

		if (parent_node->right_child != NULL)
		{
			_clear(parent_node->right_child);
			parent_node->right_child = NULL;
		}

		delete parent_node;
	}
	
public:
	//constructor
	AVL_Tree();
	AVL_Tree(int v);

	//destructor
	void clear();
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
	int root_value()
	{
		return m_root->value;
	}
};
