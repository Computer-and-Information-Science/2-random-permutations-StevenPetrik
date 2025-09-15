# Assignment 2 Reflection - Steven Petrik

## Approach to the Problem

My approach consisted of reading the problem thoroughly and thinking about what it described for a good amount of time. This allowed me to realize that assignment was to teach how to make different algorithms that perform the same task but have significantly different run times. In realizing that the outcome would be repetitive it made it easy to think about how each of the later algorithms would improve after making the first and slowest version. 

## Techniques Used

I used the hints given in the initial question to help direct my thought processes for designing the first two algorithms. For the fastest version I saw that I needed to use a swap function which I knew existed in a header file because of an offhanded comment about its existence from a previous course. To find out what this header file was I followed this link that discussed the best header file to use the swap function under: https://stackoverflow.com/questions/70787645/does-swap-function-works-in-iostream-header.

## Challenges Encountered

The biggest challenge was designing algorithm 2 since the code for some reason would struggle to run since the second array was created in the initial function without a definite size because the array is initialized with a parameter for a size. This would create issues when the array was an integer array causing a segmentation fault when the array was initialized to very large numbers. To solve this I changed the array to be only boolean variables which allowed for larger array sizes. Also I found that if the array isn’t forced to store initial zeros by initializing the array in this manner: bool used[size] = {};, it causes the code to run through an infinite loop or run very slowly(the code would never stop and I couldn't tell why). 

## Conclusions

Overall, I have found that the algorithms were simple enough to program and have different run time results because they are implemented differently. Algorithm 1 was the slowest since the algorithm itself followed a O(N^2) run time. At first I thought Algorithms 2 and 3 would have similar results on how long they take to run since they both followed O(N) run time; however I found that Algorithm 2 still was slower than Algorithm 3 since algorithm 2 had two arrays to keep track of. 

