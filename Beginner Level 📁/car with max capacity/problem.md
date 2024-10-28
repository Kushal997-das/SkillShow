# Problem Description

You are given an array of objects `arr`. The object is a car that has three properties namely `color`, `type`, and `capacity`. You need to implement the function `maxCapacityType` which will return the type of car with maximum capacity.

**Note:** If multiple cars have the same capacity, return the type of the first object that matched.

**Hint 1:** Use dot notation to access the properties of the object.

**Hint 2:** Use the length method to find the length of the array.

## Sample Input

```javascript
[
  {
    color: 'red',
    type: 'Station Wagon',
    capacity: 5
  },
  {
    color: 'green',
    type: 'Convertible',
    capacity: 2
  },
  {
    color: 'white',
    type: 'MiniVan',
    capacity: 4
  }
]
```

## Sample Output

```javascript
'Station Wagon'
```

**Explanation:**
The capacity of a ‘Station Wagon’ is 5 which is the maximum amongst the given three car objects.

```javascript
function maxCapacityType(arr) {
  // implement your function here
  
}

console.log(maxCapacityType([
  { color: 'Red', type: 'Station Wagon', capacity: 5 },
  { color: 'Black', type: 'Sedan', capacity: 4 }
]));
