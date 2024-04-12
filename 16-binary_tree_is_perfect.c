#include "binary_trees.h"


/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the binary tree.
 * Return: 1 or 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree != NULL)
	{
		if (!tree->left && !tree->right)
		{
			return (1);
		}
	}

	left = get_depth(tree->left);
	right = get_depth(tree->right);

	if ((left - right) == 0)
	{
		return (1);
	}

	return (0);
}


/**
 * get_depth - Get the depth of a binary tree.
 * @root: Pointer to the root of the binary tree.
 * Return: The depth.
 */

int get_depth(const binary_tree_t *root)
{
	int depth = 0;

	if (root == NULL)
	{
		return (0);
	}

	depth = get_depth(root->left) + get_depth(root->right) + 1;

	return (depth);
}
