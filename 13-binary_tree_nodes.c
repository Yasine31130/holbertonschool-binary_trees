#include "binary_trees.h"

/**
 * searchLeaf - search in the child for existing branch
 * @tree: tree
 * @i: counter
 */
void searchLeaf(size_t *i, const binary_tree_t *tree)
{
	if (tree->left)
		searchLeaf(i, tree->left);
	if (tree->right)
		searchLeaf(i, tree->right);
	if (tree->left || tree->right)
		(*i) = (*i) + 1;
}

/**
 * binary_tree_nodes - check the tree number of parents
 * @tree: tree we need to check the number of parents
 * Return: number of parents
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i = 0;
	size_t *iptr = &i;

	if (!tree)
		return (0);

	searchLeaf(iptr, tree);
	return (i);
}
