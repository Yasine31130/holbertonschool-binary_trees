#include "binary_trees.h"

/**
 * searchSize - search in the child for existing branch
 * @tree: tree to search
 * @i: counter
 */
void searchSize(size_t *i, const binary_tree_t *tree)
{
	if (tree->left)
		searchSize(i, tree->left);
	if (tree->right)
		searchSize(i, tree->right);
	(*i) = (*i) + 1;
}

/**
 * binary_tree_size - check the tree height
 * @tree: tree we need to check the size of
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 0;
	size_t *iptr = &i;

	if (!tree)
		return (0);

	searchSize(iptr, tree);
	return (i);
}
