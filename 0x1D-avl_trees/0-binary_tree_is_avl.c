#include "binary_trees.h"

/**
 * rheight - height measure
 * @tree: tree
 * Return: int
 */
size_t rheight(const binary_tree_t *tree)
{
	size_t a = 0;
	size_t b = 0;

	if (tree == NULL)
		return (0);
	a = rheight(tree->left);
	b = rheight(tree->right);
	if (a > b)
		return (a + 1);
	return (b + 1);
}

/**
 * binary_tree_height - rheight
 * @tree: tree
 * Return: int
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (rheight(tree) - 1);
}

/**
 * is_balanced_bst - check if balanced bst
 * @tree: tree
 * @min: int
 * @max: int
 * Return: bool
 */
int is_balanced_bst(const binary_tree_t *tree, int min, int max)
{
	int a, b;

	if (!tree)
		return (1);
	a = (tree->left)
		? (int)binary_tree_height(tree->left)
		: 0;
	b = (tree->right)
		? (int)binary_tree_height(tree->right)
		: 0;
	if (abs(a - b) > 1)
		return (0);
	if (tree->n < min || tree->n > max)
		return (0);
	return (is_balanced_bst(tree->left, min, tree->n - 1) &&
		is_balanced_bst(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_avl - checks if a binary tree is a valid AVL Tree
 * @tree: tree
 * Return: bool
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_balanced_bst(tree, INT_MIN, INT_MAX));
}
