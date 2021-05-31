        #include <bits/stdc++.h>
        using namespace std;
        void printPairs(int arr[], int n, int sum)
        {
            // Store counts of all elements in set s
            unordered_set<int> s,s1;

            // Traverse through all elements
            for (int i = 0; i < n; i++) {

                // Search if a pair can be formed with
                // arr[i].
                int rem = sum - arr[i];
                if (s.find(rem) != s.end()) {
                        s1.insert(arr[i]);
                         s1.insert(rem);

                }
                else
                    s.insert(arr[i]);

            }
            auto it =s1.begin();
            while(it!=s1.end())
            {
             cout<<*it<<" ";
            ++it;

            }

        }


        int main()
        {
            int arr[] = {7,10,2,8,8,2,2,2,5,5,5,5,6,6,2,4,4,4,-6,0,10,16};
            int n = sizeof(arr) / sizeof(arr[0]);
            int sum = 6;
            printPairs(arr,n,sum);
            return 0;
        }

