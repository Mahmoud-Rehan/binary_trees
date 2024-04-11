#include "binary_trees.h"


/**
 * binary_tree_postorder - Travers The binary tree in postorder.
 * @tree: pointer to the root of the binary tree.
 * @func: The function to be called in each node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
