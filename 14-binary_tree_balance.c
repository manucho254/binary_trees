#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_height - measure the height of a binary tree
 *
 * @tree: pointer to tree to measure height
 *
 * Return: height of binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_depth, r_depth;

	if (tree == NULL)
		return (0);

	/** If node is leaf node we return 0 */
	l_depth = binary_tree_height(tree->left); /** depth of left */
	r_depth = binary_tree_height(tree->right); /** depth of right */

	if (l_depth > r_depth)
		return (l_depth + 1);
	else
		return (r_depth + 1);
}

/**
 * binary_tree_balance - measures the,
 * balance factor of a binary tree.
 *
 * @tree: pointer to binary tree
 *
 * Return: the balance factor of a binary tree..
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left = 0, h_right = 0;

	if (tree == NULL)
		return (0);

	/** height of left subtree */
	h_left = binary_tree_height(tree->left);
	/** height of right subtree */
	h_right = binary_tree_height(tree->right);

	/** balace factor equal height left minus height right */
	return (h_left - h_right);
}
