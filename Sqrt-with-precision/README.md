<h2> Find square root of number upto given precision using binary search </h2>

<p> Given a positive number n and precision p, find the square root of number upto p decimal places using binary search. </p>

```
Input : number = 50, precision = 3
Output : 7.071

Input : number = 10, precision = 4
Output : 3.1622
```

<p> Time Complexity : The time required to compute the integral part is O(log(number)) and constant i.e, = precision for computing the fractional part. Therefore, overall time complexity is O(log(number) + precision) which is approximately equal to O(log(number)).

Auxiliary Space: O(1) since it is using constant space for variables </p>