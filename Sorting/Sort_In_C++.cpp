//Sorting in Array
//In arrays we pass address of first element and the address of element after the last
// Worst case and average case = O(n log n)
// and It internally uses IntroSort(Hybrid of QuickSort, HeapSort and Insertion Sort)
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   int arr[] = {10,20,5,7};
//   int n = 4;
//   sort(arr,arr+n);
//   for(int x: arr) {
//     cout<<x<<" ";
//   }
                                 
  
//   sort(arr,arr+n,greater<int>());
//   cout<<endl;
//   for(int u : arr) {
//     cout<<u<<" ";
//   }
//   return 0;
// }


//Sorting in Vector  
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   vector<int> v = {5,7,20,10};
//   sort(v.begin(),v.end());
//   for(int x : v) {
//     cout<<x<<" ";
//   }

//   cout<<endl;
//   sort(v.begin(),v.end(),greater<int>());
//   for(int y : v) {
//     cout<<y<<" ";
//   }
//   return 0;
// }


#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;

  };

bool myCmp(Point p1, Point p2) {
  return (p1.x < p2.x);
}

int main(){
  Point arr[] = {{3,10},{2,8},{5,4}};
  int n = 3;
  sort(arr,arr+n,myCmp);

  for(auto i : arr) {
    cout<<i.x<<" "<<i.y<<" "<<endl;
  }

  return 0;
}