t = int(input())
for _ in range(t):
    n = input().strip()
    len_n = len(n)
    min_cost = float('inf')
    best_removals = len_n - 1  # default: remove all but one digit
    
    for start in range(len_n):
        for end in range(start, len_n):
            sub = n[start:end+1]
            # Check if all zeros
            if all(c == '0' for c in sub):
                continue
            
            # Find first non-zero to determine numeric value
            first_non_zero = None
            for i, c in enumerate(sub):
                if c != '0':
                    first_non_zero = i
                    break
            if first_non_zero is None:
                continue  # this shouldn't happen due to all-zero check above
            
            numeric_part = sub[first_non_zero:]
            num = int(numeric_part)
            sum_d = sum(int(c) for c in sub)
            cost = num / sum_d
            
            current_removals = len_n - (end - start + 1)
            
            # Update min_cost and best_removals
            if cost < min_cost:
                min_cost = cost
                best_removals = current_removals
            elif cost == min_cost:
                if current_removals < best_removals:
                    best_removals = current_removals
    
    print(best_removals)