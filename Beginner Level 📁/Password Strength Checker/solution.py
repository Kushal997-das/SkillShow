password = input("Enter a password: ")

# Check the length of the password
length = len(password)

# Initialize
has_upper = False
has_lower = False
has_digit = False
has_symbol = False

# Loops each character in password to check
for char in password:
  if 'a' <= char <= 'z':
    # Checks for lowercase
    has_lower = True
  elif 'A' <= char <= 'Z':
    # Checks for uppercase
    has_upper = True
  elif "0" <= char <= '9':
    # Checks for digit
    has_digit = True
  else:
    # Checks for symbol
    has_symbol = True

# Logic conditons
if length < 6:
  # Less than 6 characters
  ans = "weak"
elif length >= 6 and length <= 10:
  # between 6 and 10 characters
  if (has_lower and has_upper) or (has_digit and (has_lower or has_upper)):
    # Contains lowercase and uppercase letters or both letters and digits
    ans = "moderate" 
  elif has_lower and not has_upper and not has_digit and not has_symbol:
    # Contains only lowercase letters
    ans = "weak"  
  elif has_digit and not has_lower and not has_upper and not has_symbol:
    # Contains only digits
    ans = "weak"  
  else:
    ans = "weak"
elif length > 10:
  # Longer than 10 characters
  if (has_lower and has_upper) or (has_digit and (has_lower or has_upper)):
    ans = "moderate"
  elif has_lower and has_upper and has_digit and has_symbol:
    # Contains lowercase, uppercase, digits, and special characters
    ans = "strong"
  else:
    ans = "weak"

print(f'Your password is {ans}.')
