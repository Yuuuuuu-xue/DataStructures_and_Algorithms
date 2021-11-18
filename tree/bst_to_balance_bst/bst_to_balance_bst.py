# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def balanceBST(self, root: TreeNode) -> TreeNode:
        # Convert the tree into a list of node
        lst = []

        # dfs for the inorder: left root right
        def dfs(curr):
            if curr is not None:
                dfs(curr.left)
                lst.append(curr.val)
                dfs(curr.right)

        dfs(root)

        # Now perform a bst and construct the tree
        def constructBalancedTree(nums):
            if len(nums) == 0:
                return None
            elif len(nums) == 1:
                return TreeNode(nums[0])
            else:
                m = len(nums) // 2
                curr_root = TreeNode(nums[m])
                curr_root.left = constructBalancedTree(nums[:m])
                curr_root.right = constructBalancedTree(nums[m + 1:])
                return curr_root

        return constructBalancedTree(lst)


if __name__ == '__main__':
    s = Solution()
    test_tree = TreeNode(1)
    test_tree.right = TreeNode(2)
    test_tree.right.right = TreeNode(3)
    test_tree.right.right.right = TreeNode(4)
    print(s.balanceBST(test_tree).val)
    print(s.balanceBST(test_tree).left.val)


