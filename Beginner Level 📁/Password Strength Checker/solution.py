def check_password_strength():
    try:
        password = input("Enter a password: ")

        # Check if the password is empty
        if not password:
            raise ValueError("Password cannot be empty.")

        # Check the length of the password
        length = len(password)

        # Initialize character type flags
        has_upper = any(char.isupper() for char in password)
        has_lower = any(char.islower() for char in password)
        has_digit = any(char.isdigit() for char in password)
        has_symbol = any(not char.isalnum() for char in password)

        # Determine password strength
        if length < 6:
            ans = "weak"
        elif 6 <= length <= 10:
            if (has_lower and has_upper) or (has_digit and (has_lower or has_upper)):
                ans = "moderate"
            else:
                ans = "weak"
        else:  # length > 10
            if has_lower and has_upper and has_digit and has_symbol:
                ans = "strong"
            elif (has_lower and has_upper) or (has_digit and (has_lower or has_upper)):
                ans = "moderate"
            else:
                ans = "weak"

        print(f'Your password is {ans}.')

    except ValueError as ve:
        print(f"Error: {ve}")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

# Call the function to execute the password strength check
check_password_strength()
