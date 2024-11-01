
# INDEX: 
```
h = head;
t = tail;
v = value;
temp = temp;
p = pre;
nN = newNode;
l = length;
a = after;
b = before;
```

# LinkedLists:

## Main Components of a LinkedList

*How this works*

**Name**(param) -> ***variables in method***

* void prepend(int value) -> nN, h, t, l++ 
* void append(int value) -> nN, h, t, l++ 
* Node removeFirst() -> temp, p, h, l--, t
* Node removeLast() -> temp, h, l--, t 
* boolean insert(int index, int value) -> l++, append(), nN, temp, get(index - 1)
* Node remove(int index) -> l, removeFirst(), get(),  
* void reverse() -> temp, h, t, (a, b ONLY USED HERE)
* Node get(int index) -> temp, h
* boolean set(int index, int value) -> temp 
* void printList() -> temp

## Understanding each Method's implementation:

### ***Node**
`What is a Node?`
------------------------------------------------
A **Node** Contains two things:
- A `Value` and a `Reference` (tech a Pointer but not really)
***CLASS:***
```java
public class Node {
    int value;
    Node next;
    public Node(int value) {
        this.value = value;
    }
}
```
------------------------------------------------
## Confused?
- That's okay, I was too; the good news' is I'm going to break down what is going on!

1) Value:
    `int value;` -> represents the value that is being passed or inserted, or removed, etc...
2) next:
    `Node next` -> represent the value that the Node is "referencing" or "Pointing too". 
    The reason this value is not passed in the [constructor](https://en.wikipedia.org/wiki/Constructor_(object-oriented_programming)) is becuase the 
    only we thing we care about is the value that is in the Node, and the `Node next;` value is already considered `null` by default. 


--------------------------------------------
# Full Implementation

## How to structure a LinkedList Class in Java:

```java
public class LinkedList {

    //creating the inner node class 
    public class Node {
        int value; // This is the value
        Node next; // This is the pointer
        public Node(int value) { 
            this.value = value;
        }
    }
 
    private Node h; // head
    private Node t; // tail
    private int l; // length
   

    // Creating the LinkedList Constructor
    public LinkedList(int value) {
        Node nN = new Node(value);
        h = nN; // Head is assigned to newNode
        t = nN; // Tail is assigned to newNode
        l = 1; // Increment the length of the List by 1
    }

    // append Method 
    public void append(int value) {
        Node nN = new Node(value);
        if (l == 0) {
            h = nN;
            t = nN;
        } else {
            t.next = nN; // Tail.next
            t = nN;  
        }
        l++; // Increment the length of the List
    }

    // RemoveLast Method
    public Node removeLast(int value) {
        if (l == 0) return null;
        Node temp = h;
        Node p = h;
        while (temp != null) {
            p = temp;
            temp = temp.next;
        }
        t = p;
        t.next = null; // get's rid of the value
        l--; // Decrementing the length of the List
        if (l == 0) { // Second check to make sure that the List is not empty at this point
            h = null;
            t = null;
        }
        return temp; // Returning the value that you are removing (temp)
    }


    // RemoveFirst Method
    public Node removeFirst(int value) {
        if (l == 0) return null;
        Node temp = h;
        h = h.next;
        temp.next = null;
        l--; // Decrementing the length of the List
        if (l == 0) { // Second check to make sure that the List is not empty at this point
            t = null;
        }
        return temp; // Returning the value that you are removing (temp)
    }

    // Get Method
    public Node get(int index) {
        if (index < 0 || index >= l) {
            return null;
        }
        temp = h;
        for (int i = 0; i < index; i++) { // We want the index because that is what the user wants returned... 
        temp.next;
        }
        return temp;
    }


    // Set Method
    public boolean set(int index, int value) {
        Node temp = get(index);
        if (temp != null) {
            temp.value = value;
            return true;
        }
        return false;
    }


    // Insert Method

}


```


--------------------------------------------------------------




