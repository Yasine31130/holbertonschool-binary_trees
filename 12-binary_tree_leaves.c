#include "binary_trees.h"

/**
 * searchLeaf - search in the tree for leaf
 * @tree: tree where to search leaf
 * @i: counter
 */
void searchLeaf(size_t *i, const binary_tree_t *tree)
{
	if (tree->left)
		searchLeaf(i, tree->left);
	if (tree->right)
		searchLeaf(i, tree->right);
	if (!(tree->left || tree->right))
		(*i) = (*i) + 1;
}

/**
 * binary_tree_leaves - check the tree for leaves
 * @tree: tree
 * Return: size of the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i = 0;
	size_t *iptr = &i;

	if (!tree)
		return (0);

	searchLeaf(iptr, tree);
	return (i);
}
