#include "binary_trees.h"


/**
 * binary_tree_inorder - Travers the binary tree in inorder.
 * @tree: Pointer to the root of the binary tree.
 * @func: The function to be called in each node ot the tree.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
