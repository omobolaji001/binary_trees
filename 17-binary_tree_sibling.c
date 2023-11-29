#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: return a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent, *sibling;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;
	if (parent->left == node)
		sibling = parent->right;

	if (parent->right == node)
		sibling = parent->left;

	return (sibling);
}
