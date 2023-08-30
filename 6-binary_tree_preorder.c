#include "binary_trees.h"

/**
 * binary_tree_preorder - go through binary tree using pre-order traversal
 *
 * @tree: pointer to tree to traverse
 * @func: pointer to function to call for each node
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func); /** left subtree */
	binary_tree_preorder(tree->right, func); /** right subtree */
}
