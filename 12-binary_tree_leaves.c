#include "binary_trees.h"
/**
 * binary_tree_leaves - count number of leaves
 *
 * @tree: tree to be counted
 * Return: size_t
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
	{
		leaf = 1;
	}
	return (leaf + binary_tree_leaves(tree->left)
			+ binary_tree_leaves(tree->right));
}
