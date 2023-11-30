#include "binary_trees.h"
/**
 * binary_trees_leaves - Count the leaves in a binary tree.
 * @tree: ptr to the root node in a tree.
 *
 * Return: leaves count or 0.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	left = 0;
	right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	return (left + right);
}
