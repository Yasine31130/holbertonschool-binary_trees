#include "binary_trees.h"

/**
 *binary_tree_insert_right - insert a node to the right of the parent
 *@parent: the node that is the prev
 *@value: value to insert in the linked list
 *Return: Return the tree
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tree = NULL;

	if (!parent)
		return (NULL);

	tree = malloc(sizeof(binary_tree_t));

	if (!tree)
		return (NULL);

	tree->parent = parent;
	tree->left = NULL;
	tree->right = NULL;
	tree->n = value;

	if (parent->right)
	{
		tree->right = parent->right;
		parent->right->parent = tree;
	}
	parent->right = tree;

	return (tree);
}
