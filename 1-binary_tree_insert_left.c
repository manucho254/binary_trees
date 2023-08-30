#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_insert_left - insert left child to another node
 *
 * @parent: pointer to parent node
 * @value: to new left child node
 *
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	/** check for failure in creating new node */
	if (new_node == NULL)
		return (NULL);

	if (parent->left == NULL)
		parent->left = new_node;
	else
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
		parent->left = new_node;
	}

	return (parent->left);
}
