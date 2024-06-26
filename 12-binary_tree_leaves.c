#include "binary_trees.h"


/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root of the binary tree.
 * Return: the Count of leaves in the binary tree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
	{
		leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
		return (leaves);
	}
	else
	{
		return (leaves + 1);
	}
}
