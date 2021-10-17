<h1 align="center">Recursions</h1>

<p> If a function is calling itself then it is a recursive function. Inside recursive function there is a base condition that terimates the recursion otherwise the recursion will keep running.</p>

- Example 1-
```
#include <iostream>

int func1(int n){
    if(n>0){
        printf("%d ", n);
        func1(n-1);
    }
}
int main(){
    int x=4;
    func1(x);
}
```

- output-
```
4 3 2 1
```

- Example 2-
```
#include <iostream>

int func2(int n){
    if(n>0){
        func2(n-1);
        printf("%d ", n);
    }
}
int main(){
    int x=4;
    func2(x);
}
```

- output-
```
1 2 3 4
```

<h4> In example 1, the function is calling itself after the printing statement and in Example 2, the function is calling itself before the printing statement.
<p> So in example 2, the function is calling itself again an again till the base condition terimates and then printing the values. Whereas in Example 1, the function is printing it's value then satisfying the base condition.</p>
</h4>
