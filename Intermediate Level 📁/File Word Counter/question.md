# Intermediate Programming Challenge: File Word Counter

## Problem Statement:
You are tasked with creating a Python script that reads a text file and performs the following tasks:

1. **Count the Total Number of Words**: 
   - Count the total number of words in the file, where words are separated by spaces or punctuation marks.

2. **Find the Top N Most Frequent Words**:
   - Display the N most frequent words in the file (excluding common stop words). 

3. **Output the Result**:
   - Save the result to a file called `output.txt`. The output should include the total word count and the top N most frequent words in the format:


## Input:
- A text file `input.txt` containing the content to be analyzed.
- An integer `N` indicating how many of the most frequent words to display.

## Output:
- A text file `output.txt` that contains the results.

## Assumptions:
- Ignore common stop words like: "and", "or", "the", "is", "in", etc. (you can use a predefined list of stop words).
- Consider words to be case-insensitive (e.g., "Apple" and "apple" should be treated as the same word).

## Example:

### Input (`input.txt`):
Python is a versatile programming language. The Python community is known for its inclusivity and large libraries.
Python allows you to build a wide range of applications, from simple scripts to complex systems. 
With Python, you can automate tasks, analyze data, and much more. 
The popularity of Python continues to grow as more developers adopt it for various purposes.
