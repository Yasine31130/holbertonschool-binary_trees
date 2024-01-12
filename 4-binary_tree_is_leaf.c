#include "binary_trees.h"

/**
 *binary_tree_is_leaf - function that checks if a node is a leaf
 *@node : pointer to the node of the tree
 *Return: 0 or 1 if it works or not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || (node->left || node->right))
		return (0);
	return (1);
}
