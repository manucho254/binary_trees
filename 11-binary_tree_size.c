#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - measure the size of a binary tree
 *
 * @tree: pointer to tree to measure height
 *
 * Return: size of binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size += binary_tree_size(tree->left); /** height of left */
	size += binary_tree_size(tree->right); /** height of right */

	return (size += 1);
}
