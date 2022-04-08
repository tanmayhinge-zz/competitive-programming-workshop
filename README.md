# Competitive Programming Workshop

<a href="https://tanmayhinge.github.io/competitive-programming-workshop">https://tanmayhinge.github.io/competitive-programming-workshop</a>

---

## Introduction

I conducted this workshop titled "Getting Started with Competitive Programming" on 09 April 2022 while I was in my final year of computer science engineering at Pillai College of Engineering. It was conducted in association with [CSI-PCE]().


DataStructures and Algorithms were covered by Rahul Maurya and Aditya Nair respectively.

This document serves as a guide for anyone who wishes to get started with competitive programming as well as takeaway notes for the workshop participants.

---

## Index of Contents

1. [Introduction to Competitive Programming](#1-introduction-to-competitive-programming)
2. [Why C++?](#2-why-c)
3. [Basic C++](#3basic-c)
4. [How to approach problems in competitive programming + Templates](#4-how-to-approach-problems-in-competitive-programming--templates)
5. [Some basic datastructures using STL](#5-some-basic-datastructures-using-stl)
6. [Some basic algorithms using STL]()
7. [Activity]()

---

## 1. Introduction to Competitive Programming

Competitive Programming is a sport where you make use of logic, math, problem solving skills and compete with other users to solve problems using code, usually by writing an algorithm to solve the problem.

Any programming language can be used for competitive programming but people generally use C++, Python and Java. C++ is the most used as well as preferred language by competitive programmers.

In these notes and workshop, I am using C++. 

In the workshop we used the Codechef online IDE. 

If you need to set up a local environment you can refer this video ---> [YouTube Link](https://www.youtube.com/watch?v=CZ7Mf7qxbIU)

There are various platforms that conduct competitive programming contests periodically:

- [CodeChef](https://www.codechef.com/)
- [CodeForces](https://codeforces.com/)
- [LeetCode](https://leetcode.com/)
- [AtCoder](https://atcoder.jp/)
- [Clist.by (Competitive Programming Calendar)](https://clist.by/)
- [StopStalk (Your all in one profile for competitive programming)](https://www.stopstalk.com/)

---

## 2. Why C++?

"C++ is fast" isnt enough justification anymore to choose C++ as your choice of language because many competitive platforms have adjusted their time limits as per the language being used.

On the other hand, it is wise to use C++ because of its rich "Standard Template Library" also abbrevated as STL.

STL provides you with a strong set of tools that make competitive programming less of a hassle.

[for eg. array.cpp](array.cpp)

Array is just a simple example that shows how powerful C++ STL is....

We will see a few more as we progress ahead.....

---

## 3.Basic C++

main function, header files, variables, datatypes, input, output, 

Explained in the workshop using a follow-along way of teaching for each concept where the participants wrote code for all the basics.

To refer all those concepts again you may use this [YouTube Video](https://www.youtube.com/watch?v=vLnPwxZdW4Y&ab_channel=freeCodeCamp.org) from freecodecamp. Checkout the timestamps for individual explainations.

---

## 4. How to approach problems in competitive programming + Templates

https://www.codechef.com/practice?page=0&limit=20&sort_by=difficulty_rating&sort_order=asc&search=&start_rating=0&end_rating=999&topic=Basic+Programming&tags=

- How to read the problem statements
- Testing your code before submitting
- Various Errors
- Test Cases
- Templates


#### How to read the problem statements

Here I explained my way of approaching a competitive programming problem. Various users may develop their own way of solving as they progress.

My way of approaching a problem is as follows:

Example take this [problem](https://www.codechef.com/problems/INSTNOODLE) from CodeChef

Here I would directly skip to the Input and Output format part rather than reading the whole "story" behind the problem.

Then I would go through the explaination. 

If at this point I have not understood the problem, I would then and only then read the first few lines where they give more context about the problem...

For starters, you may want to read those lines but as you progress you would start to ignore them by habit....

#### Testing your code before submitting

When you are done writing your code,
You can put the "sample input" given in the problem to the "Custom Input" area of the platform and "Run" instead of submit to test the code.


#### Various Errors

- Compilation Error
- Runtime Error
- Time Limit Error
- Failed Test Cases

#### Test Cases

A test case consists of an input to the code and an expected output.

There are some hidden and some non-hidden test cases.


#### Templates

Usually competitive programmers do not code everything from scratch. 
We have some self defined macros, functions and variables that leaves us with only writing the logic during competitions. In most of the competitions, using a template is alright, however some may ban the use of those.

It is important to understand C++ deeply before you use a very complex template. For now, this template is this best to begin with...

<br>

[template.cpp](template.cpp) (Non Commented Version)

Commented version:
```cpp
#include<bits/stdc++.h> // includes all the header files needed for competitive programming
using namespace std; // declares that all the code will be in standard  namespace

int main(){
    int t; // for no. of test cases
          // take other static inputs here
    cin>>t;
    while(t--){ 
        // main logic goes here
    }
    return 0;
}
```

---

# 5. Some basic datastructures using STL

# 6. Some basic algorithms using STL

# 7. Activity

A short contest hosted on CodeChef.

