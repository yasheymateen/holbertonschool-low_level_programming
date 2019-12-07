#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of a node in a binary tree, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree)
	{
		if (tree->parent)
		{
			tree = tree->parent;
			depth++;
		}
		else
		{
			break;
		}
	}
	return (depth);
}
