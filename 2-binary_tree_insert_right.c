#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as a right-child of another node
 * @parent: pointer to node to insert the right-child in
 * @value: value to store in the new node
 * description - if parent already has a right-child, new node takes its place
 *	and the old right-child is set as the right-child of the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL || parent == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	if (parent->right)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	else
	{
		new_node->right = NULL;
	}

	parent->right = new_node;

	return (new_node);
}
