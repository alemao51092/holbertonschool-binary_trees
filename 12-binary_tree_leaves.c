#include "binary_trees.h"

size_t
binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_counter, right_counter;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_counter = binary_tree_leaves(tree->left);
	right_counter = binary_tree_leaves(tree->right);

	return (left_counter + right_counter);
}
