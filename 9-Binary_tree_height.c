#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure its height.
 *
 * Return: returns the height, 0 if tree is null.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	
	while (tree->left)
	{
		left_height++;
		tree = tree->left;
	}
	
	while (tree->right)
	{
		right_height++;
		tree = (tree->right);
	}

	return (left_height > right_height ? left_height : right_height);
}
