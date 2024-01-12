#include "binary_trees.h"

/**
 * binary_tree_delete - delete a full binary tree
 * @tree: tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree && tree->left)
		binary_tree_delete(tree->left);
	if (tree && tree->right)
		binary_tree_delete(tree->right);

	if (tree)
		free(tree);
}
