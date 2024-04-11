#include "binary_trees.h"


/**
 * binary_tree_insert_right - Iinserts a node as the right-child of another node.
 * @parent: The Pointer to the node to insert the right-child in.
 * @value: The Value is to be stored in the node.
 * Return: The newely created node or NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;

	if (parent == NULL)
	{
		return (NULL);
	}

	tree = binary_tree_node(parent, value);

	if (tree == NULL)
	{
		return (NULL);
	}
	if (parent->right == NULL)
	{
		parent->right = tree;
	}
	else
	{
		tree->right = parent->right;
		parent->right->parent = tree;
		parent->right = tree;
	}

	return (tree);
}
