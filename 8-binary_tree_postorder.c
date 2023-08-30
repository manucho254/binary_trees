#include "binary_trees.h"

/**
 * binary_tree_postorder - go through binary tree using post-order traversal
 *
 * @tree: pointer to tree to traverse
 * @func: pointer to function to call for each node
 *
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func); /** left subtree */
	binary_tree_postorder(tree->right, func); /** right subtree */
	func(tree->n);
}
