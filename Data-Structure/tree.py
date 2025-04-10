class TreeNode:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

# Create nodes
root = TreeNode(1)
root.left = TreeNode(2)
root.right = TreeNode(3)

# Adding children to left and right
root.left.left = TreeNode(4)
root.left.right = TreeNode(5)

# Tree structure:
#         1
#        / \
#       2   3
#      / \
#     4   5
