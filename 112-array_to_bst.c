#include "binary_trees.h"
/**
 * array_to_bst - turns an array to a BST tree.
 * @array: array to turns to BST tree.
 * @size: size of array.
 * Return: BST tree from array.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i = 0;
	bst_t *root;
	/*
	 * @i: in zero.
	 * @root: ptr to bst_t.
	 */
	root = NULL;
	if (size == 0)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		if (i == 0)
		{
			bst_insert(&root, array[i]);
		}
		else
		{
			bst_insert(&root, array[i]);
		}
	}
	return (root);
}
