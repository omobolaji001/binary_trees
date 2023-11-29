#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);

}

/**
 * get_level -function that goes through
 * a binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * @level: a pointer to a function to call for each node
 *
 * Return: NULL
 */
void get_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (level == 0)
	{
		func(tree->n);
	}
	else if (level > 0)
	{
		get_level(tree->left, level - 1, func);
		get_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder -function that goes through
 * a binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: NULL
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_height(tree);

	for (i = 0; i <= height; i++)
		get_level(tree, i, func);

}
