DataStructures_and_Algorithms
Click [here](../README.md) to main page

## Notes
A monotonic stack is a stack whose elements are monotonically increasing or decreasing. 

If we need to pop smaller elements from the stack before pushing a new element, the stack is decreasing from bottom to top.

Otherwise, it's increasing from bottom to top.

For example, the monotonic decreasing stack:
```
Before: [5, 4, 2, 1]
To push 3, we need to pop smaller elements (or equal) elements first
After: [5, 4, 3]
```

If we need to calculate both `nextSmaller` or `prevSmaller` arrays, we can do it using a mono-stack in one pass.

## Example
#### [Next Greater Element I](./next_greater_element_i/description.md)
#### [Next Greater Node in Linked List](./next_greater_node_in_linked_list/description.md)
#### [Next Greater Element II](./next_greater_element_ii/description.md)
#### [Final Prices With a Special Discount in a Shop](./final_prices_with_a_special_discount_in_a_shop/description.md)
#### [Find the Most Competitive Subsequence](./find_the_most_competitive_subsequence/description.md)
#### [Maximum Subarray Min Product](./maximum_subarray_min_product/description.md)
#### [Remove Nodess From Linked List](./remove_nodes_from_linked_list/description.md)
#### [Maximum Width Ramp](./maximum_width_ramp/description.md)
#### [Minimum Operations to Convert All Elements to Zero](./minimum_operations_to_convert_all_elements_to_zero/description.md)