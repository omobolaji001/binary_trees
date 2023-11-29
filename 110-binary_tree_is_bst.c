#include "binary_trees.h"

/**
 *  binary_tree_is_bst -checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to check
 * Return: 0 or 1
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		if ((tree->left == NULL || tree->n > tree->left->n) &&
			(tree->right == NULL || tree->n < tree->right->n))
			return (binary_tree_is_bst(tree->left) &&
				binary_tree_is_bst(tree->right));
		return (0);
	}

	return (1);
}
