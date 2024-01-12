#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the sibling of a node
 * @node: node
 * Return: sibling node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent && node->parent->parent)
	{
		if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);
		if (node->parent->parent->right == node->parent)
			return (node->parent->parent->left);
		else
			return (NULL);
	}
	else
		return (NULL);
}
