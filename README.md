0x1D. C - Binary trees

### 1. Binary Tree:

A binary tree is a hierarchical data structure composed of nodes, where each node has at most two children, referred to as the left child and the right child. The topmost node is called the root. Here's a simple example in C:

```c
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Example binary tree:
//         1
//        / \
//       2   3
//      / \
//     4   5
```

### 2. Binary Search Tree (BST):

A Binary Search Tree is a type of binary tree with the additional property that for each node, the values in its left subtree are less than its value, and the values in its right subtree are greater than its value. This property makes searching for a specific value more efficient. Example:

```c
// Example Binary Search Tree:
//         3
//        / \
//       2   5
//      /   / \
//     1   4   6
```

### 3. Time Complexity Gain Compared to Linked Lists:

Binary trees, especially Binary Search Trees, provide faster search, insert, and delete operations compared to linked lists, where you might need to traverse the entire list. In a balanced BST, these operations have an average time complexity of O(log n), which is more efficient than O(n) for linked lists.

### 4. Depth, Height, Size of a Binary Tree:

- **Depth:** The depth of a node is the number of edges on the path from the root to that node.
- **Height:** The height of a node is the number of edges on the longest path from that node to a leaf.
- **Size:** The size of a binary tree is the total number of nodes in the tree.

### 5. Binary Tree Traversal Methods:

- **Inorder:** Left subtree, current node, right subtree.
- **Preorder:** Current node, left subtree, right subtree.
- **Postorder:** Left subtree, right subtree, current node.

### 6. Types of Binary Trees:

- **Complete Binary Tree:** Every level, except possibly the last, is completely filled, and all nodes are as left as possible.
- **Full Binary Tree:** Every node has either 0 or 2 children.
- **Perfect Binary Tree:** All internal nodes have exactly two children, and all leaf nodes are at the same level.
- **Balanced Binary Tree:** The height of the left and right subtrees of any node differs by at most one.

Understanding these concepts can help in designing efficient data structures and algorithms.
