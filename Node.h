#pragma once
#include <iostream>

class Node
{
	friend class AVL_Tree; // get, set need x
private:
	int value; // integer value
	Node* left_child;
	Node* right_child;
	int BF; //Balance Factor

public:
	Node();
	Node(int v, Node* lc, Node* rc);
};

