#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define f(i, a, n) for(int i = a; i < n; i++)
#define pb(a) push_back(a)
#define mp(a, b) make_pair(a, b)
#define mod 1000000007
int gcd(int a, int b) { if (!b) return a; return gcd(b, a % b); }  
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
using namespace std;

int merge(int arr[], int l, int m, int r) { 
  int n1 = m - l + 1; 
  int n2 =  r - m; 

  int L[n1], R[n2]; 

  f(i, 0, n1) L[i] = arr[l + i]; 
  f(i, 0, n2) R[i] = arr[m + 1 + i]; 

  int i = 0, j = 0, k = l;
  int res = 0;
  while (i < n1 && j < n2) { 
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      if (l + i > k) {
        res += l + i - k;
      } 
      i++;
    } else { 
      arr[k] = R[j]; 
      if (m + j + 1 > k) {
        res += m + j + 1 - k;
      } 
      j++; 
    } 
    k++; 
  } 

  while (i < n1) { 
    arr[k] = L[i]; 
    i++; 
    k++; 
  } 
  while (j < n2) { 
    arr[k] = R[j]; 
    j++; 
    k++; 
  }
  return res;
}

int mergeSort(int arr[], int l, int r) {
  int res = 0;
  if (l < r) {  
    int m = l + (r - l) / 2; 
    res += mergeSort(arr, l, m); 
    res += mergeSort(arr, m + 1, r); 
    res += merge(arr, l, m, r); 
  }
  return res;
} 

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int n;
  cin >> n;
  int a[n];
  f(i, 0, n) cin >> a[i];
  int res;
  res = mergeSort(a, 0, n - 1);
  cout << res << endl;
  return 0;
}