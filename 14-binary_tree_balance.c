#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: ptr to root node of tree to measure
 * Return: balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = custom_binary_tree_height(tree->left);
	right = custom_binary_tree_height(tree->right);

	return (left - right);
}

/**
 * custom_binary_tree_height - Measure the height
 * of a binary tree from a given node
 * @tree: ptr to node of tree to measure
 * Return: height of tree.
 */
int custom_binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (-1);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = custom_binary_tree_height(tree->left) + 1;
	right_height = custom_binary_tree_height(tree->right) + 1;

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
