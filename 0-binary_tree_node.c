#include "binary_trees.h"


/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: Pointer to the parent node of the created node.
 * @value: The value to be stored in the created node.
 * Return: Pointer to the new node or NULL.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;

	tree = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (tree == NULL)
	{
		return (NULL);
	}

	tree->parent = parent;
	tree->left = NULL;
	tree->right = NULL;
	tree->n = value;

	return (tree);
}
