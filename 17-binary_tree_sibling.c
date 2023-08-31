#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_sibling - finds the sibling of a node.
 *
 * @node: pointer to binary tree
 *
 * Return: pointer to sibling.
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	/** If node doesn't have a parent return NULL*/
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);
	/** Check if the left child in parent equal to node value */
	if (node->parent->left->n == node->n)
		sibling = node->parent->right;
	/** Check if the right child in parent equal to node value */
	if (node->parent->right->n == node->n)
		sibling = node->parent->left;

	return (sibling);
}
