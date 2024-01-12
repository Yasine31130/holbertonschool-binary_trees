#include "binary_trees.h"

/**
 *binary_tree_insert_left - insert a node to the left of the parent
 *@parent: the node that is the prev
 *@value: value to insert in the linked list
 *Return: Return a binary tree/ NULL in case of failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left)
	{
		tree->left = parent->left;
		parent->left->parent = tree;
	}
	parent->left = tree;

	return (tree);
}
