#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a binary tree node
 * @parent: Pointer to the parent of node
 * @value: Pointer to the value of node
 *
 * Return: binary_tree_t (node created)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *point;

	if (parent == NULL)
		return (NULL);

	point = malloc(sizeof(binary_tree_t));
	if (point == NULL)
		return (NULL);

	point->n = value;
	point->left = parent->left;
	if (parent->left)
		parent->left->parent = point;
	point->right = NULL;
	parent->left = point;
	point->parent = parent;
	return (point);
}
