#include "binary_trees.h"


/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: Pointer to the root of a binary tree.
 * Return: Pointer to the sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (!node->parent->left || !node->parent->right)
	{
		return (NULL);
	}

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
