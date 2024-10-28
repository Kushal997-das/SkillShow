import random

def display_random_fact():
    fun_facts = [
        "Honey never spoils. Archaeologists have found pots of honey in ancient Egyptian tombs that are over 3,000 years old and still edible!",
        "Bananas are berries, but strawberries aren't.",
        "Octopuses have three hearts.",
        "A day on Venus is longer than a year on Venus.",
        "Human teeth are as strong as shark teeth.",
        "Some cats are allergic to humans.",
        "Koalas have fingerprints similar to humans."
    ]
    
    fact = random.choice(fun_facts)
    print("Did you know?", fact)

if __name__ == "__main__":
    display_random_fact()
