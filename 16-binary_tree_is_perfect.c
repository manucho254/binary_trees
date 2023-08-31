#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

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

/**
 * binary_tree_is_perfect - check if binary tree is full.
 *
 * @tree: pointer to binary tree
 *
 * Return: 1 if binary tree is full else return 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d_left = 0, d_right = 0, is_full = 0;

	if (tree == NULL)
		return (0);

	is_full = binary_tree_is_full(tree);
	d_left = binary_tree_size(tree->left);
	d_right = binary_tree_size(tree->right);

	if (is_full == 1 && d_left == d_right)
		return (1);
	else
		return (0);
}
