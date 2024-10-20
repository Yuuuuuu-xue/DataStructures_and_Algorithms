class Solution:
    def evaluate(self, expression: str) -> bool:
        if expression[self.i] == ',':
            self.i += 1
            return self.evaluate(expression)
        if expression[self.i] == 't':
            self.i += 1
            return True
        if expression[self.i] == 'f':
            self.i += 1
            return False
        # either be !, &, or !
        exp = expression[self.i]
        # skip (
        self.i += 2

        curr_expr_result = None

        # Stop when we see )
        while self.i < len(expression) and expression[self.i] != ')':
            
            # evaluate the sub expression
            result = self.evaluate(expression)
            
            if curr_expr_result is None:
                curr_expr_result = result
            elif exp == '&':
                curr_expr_result = curr_expr_result and result
            elif exp == '|':
                curr_expr_result = curr_expr_result or result
        
        # We see ), increment self.i by 1
        self.i += 1
        if exp == '!':
            print(str(not curr_expr_result) + ', ' + exp)
            return not curr_expr_result
        print(str(curr_expr_result) + ', ' + exp)
        return curr_expr_result


    def parseBoolExpr(self, expression: str) -> bool:
        self.i = 0
        return self.evaluate(expression)
