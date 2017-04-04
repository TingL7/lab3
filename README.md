# lab3

* Complie Quesion A:

 make
 
---
* Quesion B result


*  size: 1000

sort(): 0.000231 seconds

v1/v2 are different.

insertion_sort(): 0.009603 seconds

v1/v2 are the same.


* size: 10000

sort(): 0.002603 seconds

v1/v2 are different.

insertion_sort(): 1.03116 seconds

v1/v2 are the same.


* size: 100000

sort(): 0.039018 seconds

v1/v2 are different.

insertion_sort(): 109.194 seconds

v1/v2 are the same.


* size: 1000000

sort(): 0.415433 seconds

v1/v2 are different.

insertion_sort(): 13008.4 seconds

v1/v2 are the same.

---
* Quesion B explanation

sort()的時間複雜度為O(nlogn)，而insertion_sort()的時間複雜度為O(n^2)。

從結果來看，可以明顯看出這兩者的時間複雜度差異很大，尤其是在要處理的資料越多的時候越明顯`.

1000筆資料時，insertion_sort()O(n^2)所用的時間已經是sort()O(nlogn)的30倍左右，
到100000筆資料時，差異更是到3000倍，甚至到1000000筆資料時，insertion_sort()所需時間遠遠超過sort()O(nlogn)所用的時間很多。

由此可見，O(nlogn)及O(n^2)兩者時間的差異很大。
