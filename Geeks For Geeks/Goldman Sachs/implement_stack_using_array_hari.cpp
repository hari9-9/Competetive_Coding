https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1

/* 

The structure of the class is
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};

 */

/* The method push to push element into the stack */
void MyStack :: push(int x)
{
        // Your Code
        arr[++top]=x;
}

/*The method pop which return the element 
  poped out of the stack*/
int MyStack :: pop()
{
    if(top==-1)
    {
        return -1;
    }
    else 
    return arr[top--];
        // Your Code       
}
