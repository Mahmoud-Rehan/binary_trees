#include "binary_trees.h"


/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root of the binary tree.
 * Return: 1 or 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int check1 = 0;
	int check2 = 0;

	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		check1 = binary_tree_is_full(tree->left);
		check2 = binary_tree_is_full(tree->right);

		if (check1 && check2)
			return (1);
	}
	else if (!tree->left && !tree->right)
		return (1);

	return (0);
}
