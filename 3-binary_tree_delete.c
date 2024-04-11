#include "binary_trees.h"


/**
 * binary_tree_delete - Delete a binary tree.
 * @tree: The pointer to the root of the binary tree.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	free(tree);
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
}
