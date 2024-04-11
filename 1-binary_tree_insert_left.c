#include "binary_trees.h"


/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: The Pointer to the node to insert the left-child in.
 * @value: The Value to be stored.
 * Return: The new node or NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;

	if (parent == NULL)
	{
		return (NULL);
	}

	tree = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (tree == NULL)
	{
		return (NULL);
	}

	if (parent->left == NULL)
	{
		tree->parent = parent;
		tree->left = NULL;
		tree->right = NULL;
		tree->n = value;
		parent->left = tree;
	}
	else
	{
		tree->parent = parent;
		tree->right = NULL;
		tree->n = value;
		tree->left = parent->left;
		parent->left->parent = tree;
		parent->left = tree;
	}
	return (tree);
}
