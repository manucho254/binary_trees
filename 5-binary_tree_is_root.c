#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is root.
 *
 * @node: pointer to node to check
 *
 * Return: 1 if node is root else return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/** If node is null its not the root */
	if (node == NULL)
		return (0);

	/** If parent is not null means the Node is a child */
	if (node->parent != NULL)
		return (0);

	return (1);
}
