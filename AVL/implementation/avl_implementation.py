class AVLNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None
        # height of subtree rooted at this node, used to find balance factor
        self.height = 1

class AVLTree:

    def insert(self, root: AVLNode, key):
        """
        Insert the node with value <key> into AVL rooted at <root>
        """
        # Base Case
        if not root:
            return AVLNode(key)
        # Similar to BST
        elif key < root.val:
            root.left = self.insert(root.left, key)
        else:
            root.right = self.insert(root.right, key)

        root.height = 1 + max(self.getHeight(root.left),
                              self.getHeight(root.right))

        # Get balance factor
        balance = self.getBalanceFactor(root)

        # Case 1 single rotation to the right
        if balance > 1 and key < root.left.val:
            return self.rightRotate(root)
        # Case 2 single rotation to the left
        if balance < -1 and key > root.right.val:
            return self.leftRotate(root)
        # Case 3 double rotation, left right
        if balance > 1 and key > root.left.val:
            root.left = self.leftRotate(root.left)
            return self.rightRotate(root)
        # Case 4 double rotation, right left
        if balance < -1 and key < root.right.val:
            root.right = self.rightRotate(root.right)
            return self.leftRotate(root)
        return root


    def getHeight(self, root):
        """
        Return the height of AVL rooted at <root>
        """
        if not root:
            return 0
        return root.height

    def getBalanceFactor(self, root):
        """
        Return the balance factor of AVL rooted at <root>
        """
        if not root:
            return 0
        return self.getHeight(root.left) - self.getHeight(root.right)

    def leftRotate(self, z):
        """
        Perform a left rotation rooted at <z>
        """
        y = z.right
        t2 = y.left
        y.left = z
        z.right = t2
        # Update height
        z.height = 1 + max(self.getHeight(z.left), self.getHeight(z.right))
        y.height = 1 + max(self.getHeight(y.left), self.getHeight(y.right))
        return y

    def rightRotate(self, z):
        """
        Perform a right rotation rooted at <z>
        """
        y = z.left
        t3 = y.right
        y.right = z
        z.left = t3
        # Update height
        z.height = 1 + max(self.getHeight(z.left), self.getHeight(z.right))
        y.height = 1 + max(self.getHeight(y.left), self.getHeight(y.right))
        return y