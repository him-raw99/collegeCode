import java.util.Scanner;   
class Stack {
    private int arr[], top, capacity;
    Stack(int size)
    {
        arr = new int[size];
        capacity = size;
        top = -1;
    }
    public void push(int x) {
        if (top == capacity - 1) {
            System.out.println("Overflow");
            return;
        }
        arr[++top] = x;
    }
    public int pop() {
        if (top == -1) {
            System.out.println("Underflow");
            return 0;
        }
        return arr[top--];
    }
    public void Display() {
        System.out.print("Current Stack : ");
        for (int i = 0; i <=top; i++) 
            System.out.print(arr[i]);
        System.out.println();
    }
}
class Queue {
    private int front, rear, capacity, queue[];
    Queue(int c) {
        front = rear = 0;
        capacity = c;
        queue = new int[capacity];
    }
    public void Enqueue(int data) {
        if (capacity == rear) {
            System.out.println("Queue is full");
            return;
        }
            queue[rear] = data;
            rear++;
    }
    public void Dequeue() {
        if (front == rear) {
            System.out.println("Queue is empty");
            return;
        }
            for (int i = 0; i < rear - 1; i++) {
                queue[i] = queue[i + 1];
            }
            rear--;
    }
    public void Display() {
        if (front == rear) {
            System.out.println("Queue is Empty");
            return;
        }
        System.out.print("Current Queue : ");
        for (int i = front; i < rear; i++) {
            System.out.print(queue[i]);
        }
        System.out.println();
    }
}
public class Q8A {
    public static void main(String args[]) {
        System.out.println("-----Implementing Stack-----");
        Stack stack = new Stack(3);
        stack.push(1);stack.push(2);stack.push(3);
        stack.Display();stack.pop();stack.Display();
        System.out.println("-----Implementing Queue-----");
        Queue q = new Queue(4);
        q.Enqueue(1);q.Enqueue(2);
        q.Enqueue(3);q.Enqueue(4);
        q.Display();q.Dequeue();
        q.Dequeue();q.Display();
    }
}