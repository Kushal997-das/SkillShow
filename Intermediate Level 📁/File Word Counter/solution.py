import re
from collections import Counter

# Predefined stop words
STOP_WORDS = {'the', 'is', 'a', 'and', 'in', 'for', 'are'}

def clean_word(word):
    """Remove punctuation and convert to lowercase."""
    return re.sub(r'[^\w\s]', '', word).lower()

def count_words(file_path):
    """Read file and count words excluding stop words."""
    with open(file_path, 'r') as file:
        text = file.read()

    words = [clean_word(word) for word in text.split()]
    filtered_words = [word for word in words if word and word not in STOP_WORDS]

    return filtered_words

def get_top_n_words(word_list, n):
    """Get the top N most frequent words."""
    word_counts = Counter(word_list)
    return word_counts.most_common(n)

def write_output(total_words, top_words, output_file):
    """Write the result to the output file."""
    with open(output_file, 'w') as f:
        f.write(f'Total words: {total_words}\n')
        f.write(f'Top {len(top_words)} words:\n')
        for word, count in top_words:
            f.write(f'{word}: {count}\n')

if __name__ == '__main__':
    # Input file and top N words to display
    input_file = 'input.txt'
    output_file = 'output.txt'
    top_n = 3  # Change this to display a different number of top words

    # Count words
    word_list = count_words(input_file)
    total_word_count = len(word_list)

    # Get top N words
    top_words = get_top_n_words(word_list, top_n)

    # Write the output to file
    write_output(total_word_count, top_words, output_file)
