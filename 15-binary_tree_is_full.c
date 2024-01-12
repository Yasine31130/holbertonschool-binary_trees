#include "binary_trees.h"

/**
 * searchForFull - search in the child for holes
 * @i: counter
 * @tree: tree to check
 */
void searchForFull(int *i, const binary_tree_t *tree)
{
	if ((*i) == 1 && tree->left)
	{
		if (!tree->right)
			(*i) = 0;
		else
			searchForFull(i, tree->left);
	}

	if ((*i) == 1 && tree->right)
	{
		if (!tree->left)
			(*i) = 0;
		else
			searchForFull(i, tree->right);
	}
}

/**
 * binary_tree_is_full - check the if the tree is full
 * @tree: tree we need to check if is full
 * Return: 1 if full, 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int i = 1;
	int *iptr = &i;

	if (!tree)
		return (0);

	searchForFull(iptr, tree);
	return (i);
}
