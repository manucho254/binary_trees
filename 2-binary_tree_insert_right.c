#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_insert_right - insert right child to another node
 *
 * @parent: pointer to parent node
 * @value: to new left child node
 *
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	/** check for failure in creating new node */
	if (new_node == NULL)
		return (NULL);

	if (parent->right)
	{
		new_node->right = malloc(sizeof(binary_tree_t));

		if (new_node->right == NULL) /** check for malloc failure */
			return (NULL);

		new_node->right = binary_tree_node(new_node, parent->right->n);
		/** check for failure in creating new node */

		if (new_node->right == NULL)
			return (NULL);
	}

	parent->right = new_node;
	return (new_node);
}
