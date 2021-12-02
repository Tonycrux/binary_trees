#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: point of the node
 *
 * Return: Pointer to the uncle node, otherwise return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	node = node->parent;
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (node->parent->left == node ?
			node->parent->right : node->parent->left);
}
