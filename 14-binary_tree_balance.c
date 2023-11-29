#include "binary_trees.h"

/**
 * binary_tree_height_bal - measures the height of a balanced binary tree.
 * @tree: pointer to the root node of the tree to measure its height.
 *
 * Return: returns the height, 0 if tree is null.
 */
size_t binary_tree_height_bal(const binary_tree_t *tree)
{
	size_t l_h, r_h;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l_h = tree->left ? 1 + binary_tree_height_bal
				(tree->left) : 1;
			r_h = tree->right ? 1 + binary_tree_height_bal
				(tree->right) : 1;
		}

		return (l_h > r_h ? l_h : r_h);
	}
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 *
 * Return: balance factor, or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, bal_factor;

	if (!tree)
		return (0);

	if (tree)
	{
		left = (int)binary_tree_height_bal(tree->left);
		right = (int)binary_tree_height_bal(tree->right);
		bal_factor = left - right;
	}

	return (bal_factor);
}
