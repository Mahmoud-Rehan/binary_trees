#include "binary_trees.h"


/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root of the binary tree.
 * Return: The count of the nodes in the binary tree.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right != NULL || tree->left != NULL)
		count = 1;

	count = count + binary_tree_nodes(tree->right);
	count = count + binary_tree_nodes(tree->left);
	return (count);
}
