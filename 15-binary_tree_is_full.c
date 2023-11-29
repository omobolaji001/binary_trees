#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to be checked.
 *
 * Return: 1 if tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	is_full = (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (is_full);
}
