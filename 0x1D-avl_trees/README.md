# 0x1D. AVL Trees

Write a function that checks if a binary tree is a valid AVL Tree

Prototype: ```int binary_tree_is_avl(const binary_tree_t *tree);```
Where ```tree``` is a pointer to the root node of the tree to check
Your function must return 1 if tree is a valid AVL Tree, and 0 otherwise
If ```tree``` is ```NULL```, return ```0```
Properties of an AVL Tree:

An AVL Tree is a BST
The difference between heights of left and right subtrees cannot be more than one
The left and right subtree each must also be a binary search tree

## Basic Binary Tree

```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

## AVL Tree
```
typedef struct binary_tree_s avl_t;
```


## Author ✒️

_Developed by_

**Jhonatan Angarita**

- [Twitter](https://twitter.com/Alejandro_Angar)
- LinkedIn - [Jhonathan Alejandro](https://github.com/JhonathanAlejandro01)
