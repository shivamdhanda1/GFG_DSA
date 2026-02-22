// #include <bits/stdc++.h>
// using namespace std;

// My code - this logic will not work if the largest element is at index 0

// int Largest2nd(int arr[], int n)
// {
//     int i;
//     int l;
//     int k;
//     int max = arr[0];
//     int max2 = 0;
//     for (i = 1; i < n; i++)
//     {
//         if (max < arr[i])                                               
//         {
//             max = arr[i];
//             l = i;
//         }
//     }

//     for (int j = 0; j < n; j++)
//     {
//         if (j == l)
//         {
//             continue;
//         }
//         if (max2 < arr[j])
//         {
//             max2 = arr[j];
//             k = j;
//         }
//     }
//     return k;
// }

// int main()
// {
//     int arr[] = {23, 43, 76, 13, 55, 83, 97};
//     int n = 7;
//     int result = Largest2nd(arr, n);
//     cout << result;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int largest(int arr[], int n)
// {
//     int j = 0;
//     for (int i = 1; i < n; i++)
//     {                                // GFG Naive approach
                                     // Best solution is below this one
//         if (arr[i] > arr[j])
//         {
//             j = i;
//         }
//     }
//     return j;
// }


// int getLargest(int arr[], int n)
// {
//     int lar = largest(arr, n);
//     int res = -1;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != arr[lar])
//         {

//             if (res == -1)
//             {
//                 res = i;
//             }
//             else if (arr[i] > arr[res])
//             {
//                 res = i;
//             }
//         }
//     }
//     return res;
// }

// int main() 
// {
//     int arr[] = {97,21,45,67,89, 97};
//     int n = 8;
//     int result = getLargest(arr, n);
//     cout << result;
//     return 0;
// }




// Efficient Approach - 1 traversal solution
// Time complexity = theta(n) and Auxilary space = theta(1)

#include <bits/stdc++.h>
using namespace std;

int Largest2nd(int arr[], int n) {
int larg = 0; int res = -1;
for(int i  = 1; i < n; i++) {
    if(arr[i] > arr[larg]) {
        res = larg;
        larg = i;

    }
    else if(arr[i] != arr[larg]) {
        if(res==-1 || arr[i] > arr[res] ) {
            res = i;
        }
    }
}
return res;
}

int main(){
    int arr[] = {22,54,87,22,45,89,93};
    int n = 7;
    int answer = Largest2nd(arr,n);
    cout<<answer;
    return 0;
}

