#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_height - measure the height of a binary tree
 *
 * @tree: pointer to tree to measure height
 *
 * Return: size of binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	/** Go through all the parents */
	while (tree->parent)
	{
		depth += 1;
		tree = tree->parent;
	}

	return (depth);
}
