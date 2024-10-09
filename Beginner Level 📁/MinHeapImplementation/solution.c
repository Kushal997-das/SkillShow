#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

int heap[MAX_SIZE];
int heap_size = 0;

// Function to swap two elements
void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

// Function to heapify downwards
void heapifyDown(int index)
{
  int smallest = index;
  int left = 2 * index + 1;
  int right = 2 * index + 2;

  if (left < heap_size && heap[left] < heap[smallest])
  {
    smallest = left;
  }

  if (right < heap_size && heap[right] < heap[smallest])
  {
    smallest = right;
  }

  if (smallest != index)
  {
    swap(&heap[index], &heap[smallest]);
    heapifyDown(smallest);
  }
}

// Function to heapify upwards
void heapifyUp(int index)
{
  int parent = (index - 1) / 2;
  if (index && heap[parent] > heap[index])
  {
    swap(&heap[index], &heap[parent]);
    heapifyUp(parent);
  }
}

// Function to insert an element into the Min-Heap
void insert(int element)
{
  if (heap_size == MAX_SIZE)
  {
    printf("Heap overflow. Cannot insert.\n");
    return;
  }
  heap[heap_size] = element;
  heap_size++;
  heapifyUp(heap_size - 1);
}

// Function to extract the minimum element from the Min-Heap
int extractMin()
{
  if (heap_size <= 0)
  {
    printf("Heap underflow.\n");
    return -1;
  }
  if (heap_size == 1)
  {
    heap_size--;
    return heap[0];
  }
  int root = heap[0];
  heap[0] = heap[heap_size - 1];
  heap_size--;
  heapifyDown(0);
  return root;
}

// Function to delete a specific element from the Min-Heap
void deleteElement(int element)
{
  int index = -1;
  for (int i = 0; i < heap_size; i++)
  {
    if (heap[i] == element)
    {
      index = i;
      break;
    }
  }
  if (index == -1)
  {
    printf("Element not found in the heap.\n");
    return;
  }
  heap[index] = heap[heap_size - 1];
  heap_size--;
  heapifyDown(index);
}

// Function to display the elements of the Min-Heap
void displayHeap()
{
  if (heap_size == 0)
  {
    printf("Heap is empty.\n");
    return;
  }
  printf("Heap elements: ");
  for (int i = 0; i < heap_size; i++)
  {
    printf("%d ", heap[i]);
  }
  printf("\n");
}

int main()
{
  int choice, element;
  while (1)
  {
    printf("Enter command (1: Insert, 2: Extract Min, 3: Display, 4: Delete, 0: Exit): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("Enter element to insert: ");
      scanf("%d", &element);
      insert(element);
      break;
    case 2:
      element = extractMin();
      if (element != -1)
      {
        printf("Extracted min: %d\n", element);
      }
      break;
    case 3:
      displayHeap();
      break;
    case 4:
      printf("Enter element to delete: ");
      scanf("%d", &element);
      deleteElement(element);
      break;
    case 0:
      exit(0);
    default:
      printf("Invalid command.\n");
    }
  }
  return 0;
}
