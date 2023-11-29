#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 0 or 1
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && !tree->right)
		return (1);

	if (tree->left)
		return (binary_tree_is_complete(tree->left)
		&& binary_tree_is_complete(tree->right));

	return (0);
}
