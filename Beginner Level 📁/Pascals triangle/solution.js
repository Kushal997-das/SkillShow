function pascalsTriangle(n) {
  let ans = [];
  for (let i = 0; i < n; i++) {
    ans.push([]);
    for (let j = 0; j <= i; j++) {
      if (ans[i - 1] && ans[i - 1][j] && ans[i - 1][j - 1])
        ans[i].push(ans[i - 1][j] + ans[i - 1][j - 1]);
      else ans[i].push(1);
    }
  }
  return ans;
}

console.log(pascalsTriangle(n));
