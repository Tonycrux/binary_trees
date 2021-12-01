#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary tree node
 * @parent: Pointer to the parent of node
 * @value: Pointer to the value of node
 *
 * Return: binary_tree_t (node created)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *point = malloc(sizeof(binary_tree_t));

	point->n = value;
	point->parent = parent;
	point->left = NULL;
	point->right = NULL;

	if (point == NULL)
		return (NULL);

	return (point);
}
