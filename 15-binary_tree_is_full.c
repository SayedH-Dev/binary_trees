#include "binary_trees.h"
/**
 * binary_tree_is_full - check if the tree is a full binary tree.
 * @tree: a tree to check
 * Return: 1 if the node is a leaf and returning the highest node;
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int right, left;

	right = left = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
		return (0);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (right == 1 && left == 1)
		return (1);

	return (0);
}
