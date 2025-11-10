# import re
# import math

# operators = ["+", "-"]

# expression = input()

# left_hand_side = expression.split('=')[0]
# right_hand_side = expression.split('=')[1]

# left_hand_side = re.split(r'[+-]', left_hand_side)
# right_hand_side = re.split(r'[+-]', right_hand_side)

# sum_left_hand_side = 0
# sum_right_hand_side = 0

# for i in range(len(left_hand_side)):
#     left_hand_side[i] = int(left_hand_side[i])
#     sum_left_hand_side += int(left_hand_side[i])

# for i in range(len(right_hand_side)):
#     right_hand_side[i] = int(right_hand_side[i])
#     sum_right_hand_side += int(right_hand_side[i])

# if sum_left_hand_side == sum_right_hand_side:
#     print("Correct")
# else:
#     diff = math.fabs(sum_left_hand_side - sum_right_hand_side)
#     if diff == 1:
#         # code
#     else:
#         print("Impossible")

def can_correct_by_moving_digit(expression):
    left_hand_side, right_hand_side = expression.split('=')

    left_value = eval(left_hand_side)
    right_value = eval(right_hand_side)
    
    if left_value == right_value:
        return "Correct"
    
    for i in range(len(expression)):
        if expression[i].isdigit():
            for j in range(len(expression) + 1):
                if j != i:
                    new_expression = (expression[:i] + expression[i+1:j] + expression[i] + expression[j:])
                    if '=' in new_expression:
                        try:
                            new_left_hand_side, new_right_hand_side = new_expression.split('=')
                            new_left_value = eval(new_left_hand_side)
                            new_right_value = eval(new_right_hand_side)
                            if new_left_value == new_right_value:
                                return new_expression
                        except (SyntaxError, ZeroDivisionError):
                            continue
                        except (ValueError):
                            return "Impossible"

    return "Impossible"


expression = input().strip()
result = can_correct_by_moving_digit(expression)
print(result)
