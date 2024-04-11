#include "binary_trees.h"


/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root of the tree.
 * Return: The balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (left_height - right_height);
}


/**
 * height - Count the height of the left and right sub-tree.
 * @root: The Pointer to the root of the sub-tree.
 * Return: The height.
 */

size_t height(binary_tree_t *root)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (root == NULL)
		return (0);

	if (root->left != NULL)
	{
		left_height = height(root->left) + 1;
	}
	else
		return (1);

	if (root->right != NULL)
	{
		right_height = height(root->right) + 1;
	}
	else
		return (1);

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
