<h1 align="center"> Types of Recursions </h1>

- Tail Recursions
- Head Recursions
- Tree Recursions
- Indirect Recursions
- Nested Recursions


<h3 align="left">Tail Recursion</h3>
<p>If a recursive function is calling itself and that recursive call is the last statement in a function.
Then it is called **Tail Recursion**, after that call, there is nothing it is not performing anything.</p>

- For example:
```
void fun1(int n){
    if(n>0){
        -----
        -----
        fun1(n-1);       // Last statement of the function
    }
}
```

<h3 align="left">Head Recursion</h3>
<p>If a recursive function is calling itself and that recursive call is the first statement in a function.
Then it is called **Head Recursion**, after that call, all the statements are performed.</p>

- For example:
```
void fun1(int n){
    if(n>0){
        fun1(n-1);       // First statement of the function
        -----
        -----
    }
}
```

<h3 align="left">Tree Recursion</h3>
<p>If a recursive function is calling itself more than one time then it is called **Tree Recursion**, the statements to be performed can be before as well as after the call of recursive function.</p>

- Time complexity- O(2^n)            
- Space complexity- O(n)

- For example:
```
void fun1(int n){
    if(n>0){
        -----
        -----
        fun1(n-1);       // First call of the function
        -----
        -----
        fun1(n-1);       // Second call of the function
        -----
        -----
    }
}
```

<h3 align="left">Indirect Recursion</h3>
<p>If a recursive function is calling another function and that function is calling another function and that funtion is calling the first function then it is called **Indirect Recursion**. If any of the function's base condition fails, it will return back to the previous function.</p>

- For example:
```
void funA(int n){
    if(n>0){
        -----
        -----
        funB(n-1);       // First call of the function
    }
}
void funB(int n){
    if(n>0){
        -----
        -----
        funA(n-3);       // First call of the function
    }
}
```

<h3 align="left">Nested Recursion</h3>
<p>When function is calling itself inside a function only. So this is recursion inside recursion, so it is called as **Nested Recursion**.</p>

- For example:
```
void fun1(int n){
    if(n>0){
        -----
        -----
        fun(fun1(int n));       // Call of the function inside a function
    }
}
```

<h4 align="center"> Note: All the examples are pseudo code. </h4>