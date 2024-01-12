#include "binary_trees.h"

/**
 * search - search in the child for existing branch
 * @tree: branch to check
 * @test: count the number of iteration of the function
 * @i: counter
 */
void search(size_t *i, const binary_tree_t *tree, size_t test)
{
	if (tree->left)
		search(i, tree->left, test + 1);
	if (tree->right)
		search(i, tree->right, test + 1);
	if (*i < test)
		*i = test;
}

/**
 * binary_tree_height - check the tree height
 * @tree: tree we need to check the height of
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0;
	size_t *iptr = &i;

	if (!tree)
		return (0);

	search(iptr, tree, 0);
	return (i);
}
