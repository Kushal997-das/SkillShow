import java.util.HashMap;

public class FruitCollector {
    public int totalFruit(int[] fruits) {
        HashMap<Integer, Integer> basket = new HashMap<>();
        int left = 0; 
        int maxFruits = 0; 

        for (int right = 0; right < fruits.length; right++) {
            // Add the fruit type to the basket
            basket.put(fruits[right], basket.getOrDefault(fruits[right], 0) + 1);

            // If we have more than 2 types of fruits, shrink the window from the left
            while (basket.size() > 2) {
                basket.put(fruits[left], basket.get(fruits[left]) - 1);
                if (basket.get(fruits[left]) == 0) {
                    basket.remove(fruits[left]);
                }
                left++;
            }

            // Calculate the maximum fruits we can collect
            maxFruits = Math.max(maxFruits, right - left + 1);
        }

        return maxFruits;
    }

    public static void main(String[] args) {
        FruitCollector collector = new FruitCollector();
        int[] fruits = {1, 2, 1, 2, 3, 2, 2};
        System.out.println("Maximum fruits collected: " + collector.totalFruit(fruits));
    }
}
