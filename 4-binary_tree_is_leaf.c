#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is a leaf
 *
 * @node: pointer to node to check.
 *
 * Return: 1 if node is leaf else return 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/** If node is null its not a leaf */
	if (node == NULL)
		return (0);
	/** If eather left or right is not null its not a leaf */
	if (node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
