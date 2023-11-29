#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: return a pointer to the ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first->parent == second->parent)
		return (first->parent);

	if (first->parent == second)
		return (first->parent);

	if (first == second->parent)
		return (second->parent);

	return (binary_trees_ancestor(first->parent, second->parent));
}
