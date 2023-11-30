#include "binary_trees.h"
/**
 * binary_tree_size - gets the size of a binary tree
 * @tree: ptr to the root node.
 * Return: the size of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
