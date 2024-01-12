#include "binary_trees.h"

/**
 *binary_tree_balance - function that check the balance of a binary tree
 *@tree: Pointer to the binary tree root
 *Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int i;

	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);
	i = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	return (i);
}

/**
 *binary_tree_height - functions that measures the height of a binary tree
 *@tree: Pointer to the root node of the tree to measure the height.
 *Return: 0 if tree is Null or tyhe height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r, l;

	if (!tree)
		return (0);
	r = binary_tree_height(tree->right);
	l = binary_tree_height(tree->left);
	if (l > r)
		r = l;
	return (r + 1);
}
