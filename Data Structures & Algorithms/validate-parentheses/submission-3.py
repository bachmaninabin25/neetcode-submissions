class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        mapping = {')': '(', ']': '[', '}': '{'}
        
        for char in s:
            if char in mapping:
                # Pop the top element if stack is non-empty, otherwise use a dummy value
                top_element = stack.pop() if stack else '#'
                
                # If the mapped character for the bracket doesn't match the top element, return False
                if mapping[char] != top_element:
                    return False
            else:
                # It's an opening bracket, push onto stack
                stack.append(char)
                
        # If the stack is empty, all brackets were properly matched
        return not stack