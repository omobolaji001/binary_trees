#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to be checked.
 *
 * Return: 1 if perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_perfect = 0;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
		is_perfect = 1;
	else
		return (0 * is_perfect);
	binary_tree_is_perfect(tree->left);
	binary_tree_is_perfect(tree->right);

	return (is_perfect);
}
