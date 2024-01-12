#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node
 * Return: sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (node == node->parent->left && node->parent->right)
			return (node->parent->right);
		if (node == node->parent->right && node->parent->left)
			return (node->parent->left);
		else
			return (NULL);
	}
	else
		return (NULL);
}
