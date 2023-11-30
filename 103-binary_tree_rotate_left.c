#include "binary_trees.h"

/**
 * binary_tree_rotate_left -performs a left-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new;

	if (!tree)
		return (NULL);

	new = tree->right;
	tree->right = NULL;
	new->parent = NULL;

	if (new->left != NULL)
	{
		new->left->parent = tree;
		tree->right = new->left;
		new->left = NULL;
	}

	tree->parent = new;
	new->left = tree;
	return (new);
}
