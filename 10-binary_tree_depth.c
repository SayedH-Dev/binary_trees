#include "binary_trees.h"

/**
 * binary_tree_depth - get the depth of a node in a binary tree
 * @tree: A ptr to the node.
 * Return: Depth of the node.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}

