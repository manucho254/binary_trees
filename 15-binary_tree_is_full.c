#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_is_full - check if binary tree is full.
 *
 * @tree: pointer to binary tree
 *
 * Return: 1 if binary tree is full else return 0.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	/** check for leaf Nodes */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/** check for nodes with one child */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

