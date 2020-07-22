#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if a node is a leaf
 *@node: node for check is a leaf
 * Return: Always 0 (Success)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL)
		return (1);
	else if (node->left == NULL)
		return (1);
	return (0);
}
