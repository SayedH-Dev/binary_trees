#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: ptr to root node of tree to measure
 * Return: balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measure the height
 * of a binary tree from a given node
 * @tree: ptr to node of tree to measure
 * Return: height of tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_hight = 0, right_hight = 0;

		left_hight = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right_hight = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return ((left_hight > right_hight) ? left_hight : right_hight);
	}

	return (0);
}
