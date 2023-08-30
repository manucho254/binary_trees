#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - delete entire binary tree
 *
 * @tree: pointer to binary tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL) /** Base condition for recursive function */
		return;

	binary_tree_delete(tree->left); /** left nodes */
	binary_tree_delete(tree->right); /** right nodes */

	free(tree);
}
