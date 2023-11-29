#include "binary_trees.h"

/**
 * binary_tree_rotate_right -performs a right-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new;

	if (!tree)
		return (NULL);

	new = tree->left;
	tree->left = NULL;
	new->parent = NULL;

	if (new->right != NULL)
	{
		new->right->parent = tree;
		tree->left = new->right;
		new->right = NULL;
	}

	tree->parent = new;
	new->right = tree;
	return (new);
}
