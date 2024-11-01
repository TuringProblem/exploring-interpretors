# LinkedLists:

## Main Components of a LinkedList

*How this works*

**Name**(param) -> ***variables in method***

* void prepend(int value) -> nN, h, t, l++ 
* void append(int value) -> nN, h, t, l++ 
* Node removeFirst() -> 
* Node removeLast() -> 
* boolean insert(int index, int value) ->
* Node remove
* void reverse() ->
* Node get(int index) ->
* boolean set(int index, int value) -> 
* void printList() -> temp

# INDEX: 
```
h = head;
t = tail;
v = value;
temp = temp;
p = pre;
nN = newNode;
l = length;
```

--------------------------------------------
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
   
    public LinkedList(int value) {
        Node nN = new Node(value);
        h = nN; // Head is assigned to newNode
        t = nN; // Tail is assigned to newNode
        l = 1; // Increment the length of the List by 1
    }

    // append method
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

    // RemoveLast
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


    // RemoveFirst
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

    //


}


```





