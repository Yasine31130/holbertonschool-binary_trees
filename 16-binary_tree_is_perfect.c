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
 * countElem - count how many element would be in a tree of @height height
 * @size: size of the tree
 * @height: height of the tree
 * Return: 1 if logic, 0 if not
 */
int countElem(int size, int height)
{
	int a = 0, b = 1;

	while (b <= height + 1)
	{
		a = (a * 2) + 1;
		b++;
	}
	if (a == size)
		return (1);
	return (0);
}
/**
 * binary_tree_is_perfect - check the if the tree is full
 * @tree: tree we need to check if is full
 * Return: 1 if full, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size = 0;
	size_t height = 0;
	size_t *sizeptr = &size;
	size_t *heightptr = &height;

	if (!tree)
		return (0);

	search(heightptr, tree, 0);
	searchSize(sizeptr, tree);
	return (countElem((int)size, (int)height));
}
