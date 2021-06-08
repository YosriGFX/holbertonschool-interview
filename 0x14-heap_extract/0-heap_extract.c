#include "binary_trees.h"

/**
 * get_size - gets the root size
 * @root: pointer
 * Return: size
 */
int get_size(heap_t *root)
{
	return (
		root ? 1 + get_size(root->left) + get_size(root->right) : 0
	);
}


/**
 * heap_extract - extracts the root node of a Max Binary Heap
 * @root: pointer
 * Return: int
 */
int heap_extract(heap_t **root)
{
	int n, size, i, temp;
	heap_t *node, *index, *child;

	i = 1;
	if (!root || !*root)
		return (0);
	index = *root;
	n = index->n;
	size = get_size(index);
	if (size == 1)
	{
		free(index);
		*root = NULL;
		return (n);
	}
	for (; i <= size;)
		i <<= 1;
	i >>= 2;
	for (node = index; i > 0; i >>= 1)
		node = size & i ? node->right : node->left;
	index->n = node->n;
	if (node->parent->left == node)
		node->parent->left = NULL;
	else
		node->parent->right = NULL;
	free(node);
	node = index;
	while (1)
	{
		if (!node->left)
			break;
		if (!node->right)
			child = node->left;
		else
			child = node->left->n > node->right->n ? node->left : node->right;
		if (node->n > child->n)
			break;
		temp = node->n;
		node->n = child->n;
		child->n = temp;
		node = child;

	}
	*root = index;
	return (n);
}
