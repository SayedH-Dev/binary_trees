#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with 1 child or more.
 * @tree: ptr to the tree root.
 *
 * Return: the Cnodes count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t Cnodes = 0;

	if (tree)
	{
		Cnodes += (tree->left || tree->right) ? 1 : 0;
		Cnodes += binary_tree_nodes(tree->left);
		Cnodes += binary_tree_nodes(tree->right);
	}

	return (Cnodes);
}
