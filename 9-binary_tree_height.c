#include "binary_trees.h"


/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root of the binary tree.
 * Return: The height of the binary tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_h = 0;
	size_t left_h = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (0);
	}
	else
	{
		right_h = binary_tree_height(tree->right);
		left_h = binary_tree_height(tree->left);

		if (right_h >= left_h)
			return (++right_h);
		else
			return (++left_h);
	}
}
