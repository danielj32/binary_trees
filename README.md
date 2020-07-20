![Holberton school logo](https://upload.wikimedia.org/wikipedia/commons/f/fe/900-158_Ahnentafel_Herzog_Ludwig.jpg)
# 0x1D. C - Binary trees

A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child.

### Example how to open:
	
```
	alex@/tmp/binary_trees$ cat 0-main.c 
	#include <stdlib.h>
	#include "binary_trees.h"

	/**
	* main - Entry point
	*
	* Return: Always 0 (Success)
	*/
	int main(void)
	{
		binary_tree_t *root;

	        root = binary_tree_node(NULL, 98);

		root->left = binary_tree_node(root, 12);
		root->left->left = binary_tree_node(root->left, 6);
		root->left->right = binary_tree_node(root->left, 16);

		root->right = binary_tree_node(root, 402);
		root->right->left = binary_tree_node(root->right, 256);
		root->right->right = binary_tree_node(root->right, 512);

		binary_tree_print(root);
		return (0);
	    }
alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
alex@/tmp/binary_trees$ ./0-node
       .-------(098)-------.
         .--(012)--.         .--(402)--.
	 (006)     (016)     (256)     (512)
	alex@/tmp/binary_trees$
```

### Contact Info:
#### Git: danielj32
