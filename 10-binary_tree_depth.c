#include "binary_trees.h"


/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth of.
 * Return: the depth or 0.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent != NULL)
	{
		depth = binary_tree_depth(tree->parent);
		return (depth + 1);
	}
	else
	{
		return (depth);
	}
}
