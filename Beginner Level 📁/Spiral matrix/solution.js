function spiralMatrix(n) {
  let count = 1;
  let ans = new Array(n);

  let leftmost_col = 0;
  let rightmost_col = n - 1;
  let topmost_row = 0;
  let bottommost_row = n - 1;

  for (let i = 0; i < n; i++) {
    ans[i] = new Array(n);
  }

  while (count <= n * n) {
    // Move right till we find empty cells
    for (let i = leftmost_col; i <= rightmost_col; i++) {
      ans[topmost_row][i] = count;
      count++;
    }
    topmost_row++;

    // Move down till we find empty cells
    for (let i = topmost_row; i <= bottommost_row; i++) {
      ans[i][rightmost_col] = count;
      count++;
    }
    rightmost_col--;

    // Move left till we find empty cells
    for (let i = rightmost_col; i >= leftmost_col; i--) {
      ans[bottommost_row][i] = count;
      count++;
    }
    bottommost_row--;

    // Move up till we find empty cells
    for (let i = bottommost_row; i >= topmost_row; i--) {
      ans[i][leftmost_col] = count;
      count++;
    }
    leftmost_col++;
  }
  return ans;
}
console.log(spiralMatrix(n));
