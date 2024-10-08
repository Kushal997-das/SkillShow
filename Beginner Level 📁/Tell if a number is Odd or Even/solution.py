def even_or_odd(T):
    for number in T:
        if number % 2 == 0:
            print(f"{number} is an EVEN number.")
        else:
            print(f"{number} is an ODD number.")


ARRAY_TEST = [2, 4, 6, 5, 7, 3, 1]

even_or_odd(ARRAY_TEST)
