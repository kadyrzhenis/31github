def generate_pascal_triangle(n):
    for i in range(n):
        # adjust space
        print(' ' * (n - i), end='')

        # compute values for Pascal's Triangle
        row = [1]
        for j in range(1, i + 1):
            row.append(row[j - 1] * (i - j + 1) // j)

        # print the row
        print(' '.join(map(str, row)))

# Example usage
n = int(input())
generate_pascal_triangle(n)
