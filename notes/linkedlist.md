
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

# [LinkedLists](https://en.wikipedia.org/wiki/Linked_list):

## Main Components of a LinkedList

*How this works*

[**Name**](#name)[(param)](#param) -> [***variables in method***](#var-in-meth)

[] void <a name="name">prepend</a><a name="param">(int value)</a> <a name="var-in-meth">-> nN, h, t, l++</a> 
[] void append(int value) -> nN, h, t, l++ 
[] Node removeFirst() -> temp, p, h, l--, t
[] Node removeLast() -> temp, h, l--, t 
[] boolean insert(int index, int value) -> l++, append(), nN, temp, get(index - 1)
[] Node remove(int index) -> l, removeFirst(), get(),  
[] void reverse() -> temp, h, t, (a, b ONLY USED HERE)
[] Node get(int index) -> temp, h
[] boolean set(int index, int value) -> temp 
[] void printList() -> temp

## Understanding each Method's implementation:

### ***[Node](https://en.wikipedia.org/wiki/Node_(computer_science))***
`What is a Node?`
------------------------------------------------
A <a name="node-anchor">**Node**</a> Contains two things:
- A `Value` and a `Reference` (tech a [Pointer](https://en.wikipedia.org/wiki/Pointer_(computer_programming)) but not really)
***[CLASS](https://en.wikipedia.org/wiki/Class_(computer_programming)):***
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
## ~~Confused~~?<sub>OF COURSE NOT!</sub>
- That's okay, I was too; the good news' is I'm going to break down what is going on!

1) Value:
    - `int value;` -> represents the value that is being passed or inserted, or removed, etc...
2) next:
    - `Node next` -> represent the value that the Node is "[referencing](https://en.wikipedia.org/wiki/Reference_(computer_science))" or "Pointing too". 
    The reason this value is not passed in the [constructor](https://en.wikipedia.org/wiki/Constructor_(object-oriented_programming)) is becuase the 
    only we thing we care about is the value that is in the [Node](), and the `Node next;` value is already considered `null` by default. 
----------------------------------------------------------
# Implementing each [Method](https://en.wikipedia.org/wiki/Method_(computer_programming))

# Append



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
    public boolean insert(int index, int value) {
        if (index < 0 || index > l) return false;
        if (index == 0) {
            prepend(value);
            return true;
        }
        if (index == l) {
            append(value);
            return true;
        }
        // Else we need to create the new Node from Scratch and add it
        Node nN = new Node(value);
        Node temp = get(index - 1);
        nN.next = temp.next;
        temp.next = null;
        l++;
        return true;
    } 

    // Remove Method
    public Node remove(int index) {
        if (index < 0 || index >= l) { return null; }
        if (index == 0) { return removeFirst(); }
        if (index == l - 1) { return removeLast(); }
        Node prev = get(index - 1);
        Node temp = prev.next;
        prev.next = temp.next;
        temp.next = null;
        l--;
        return temp;
    }


    // Reverse Method
    public void reverse() {
        Node temp = h;
        h = t;
        t = temp;
        Node a = temp.next; // After
        Node b = null; // Before

        for (int i = 0; i < l; i++) {
            a = temp.next;
            temp.next = b;
            b = temp;
            temp = a;
        }
    }

}

```

--------------------------------------------------------------




