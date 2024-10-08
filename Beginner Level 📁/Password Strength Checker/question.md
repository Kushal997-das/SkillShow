# Build a Simple Password Strength Checker

The program in Python should check if a password is strong according to some given criteria which are described below. Users can enter a password string and the application will output a strength rating as **Weak**, **Moderate**, and **Strong**.

## Criteria

The password strength is determined based on the following rules:

1. **Weak**
   - Password length is less than 6 characters **OR**
   - It contains only lowercase letters or only digits

2. **Moderate**
   - Password length is between 6 and 10 characters
   - It contains a combination of lowercase and uppercase letters **OR**
   - It contains both letters and digits

3. **Strong**
   - Password length is greater than 10 characters
   - It contains at least 1 lowercase letter, 1 uppercase letter, 1 digit and 1 special character
  
## Example

A string (password) can be entered in the terminal. The program will evaluate the strength of the password and print the result.

```
Enter a password: tH!sPa5sW0rD#
Your password is strong.
```

