#include "binary_trees.h"


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right != NULL || tree->left != NULL)
		count = 1;

	count = count + binary_tree_nodes(tree->right);
	count = count + binary_tree_nodes(tree->left);
	return (count);
}
