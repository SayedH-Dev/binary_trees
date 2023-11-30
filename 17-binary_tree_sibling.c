#include "binary_trees.h"
/**
 * binary_tree_sibling - Find the sibling of a binary tree node.
 * @node: The node for which to find the sibling.
 *
 * Return: Pointer to the sibling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
