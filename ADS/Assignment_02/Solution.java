import java.util.*;

public class Solution<Key extends Comparable<Key>, Value> {
    private Node root;// root of BST

    private class Node {
       
        private Key key;           // sorted by key
        private Value val;         // associated data
        private Node left, right;  // left and right subtrees
        private int n;          // number of nodes in subtree

        public Node(Key key, Value val, int size) {
            this.key = key;
            this.val = val;
            this.n = 1;
        }
    }

    /**
     * Initializes an empty symbol table.
     */
    public Solution() {
        root=null;
    
       
    }

    /**
     * Returns true if this symbol table is empty.
     * @return {@code true} if this symbol table is empty; {@code false} otherwise
     */
    public boolean isEmpty() {
        
        if (size()==0) {
            return true;  
        }
            return false;
    }

    /**
     * Returns the number of key-value pairs in this symbol table.
     * @return the number of key-value pairs in this symbol table
     */
    public int size() {
      return size(root);
       
    }

    // return number of key-value pairs in BST rooted at x
    public int size(Node x) {
           if (x != null) 
        {
            return  size(x.left) + size(x.right) + 1;
        }
       
       else
        return 0;
    }

    /**
     * Does this symbol table contain the given key?
     *
     * @param  key the key
     * @return {@code true} if this symbol table contains {@code key} and
     *         {@code false} otherwise
     * @throws IllegalArgumentException if {@code key} is {@code null}
     */
    // public boolean contains(Key key) {
       
    // }

    /**
     * Inserts the specified key-value pair into the symbol table, overwriting the old 
     * value with the new value if the symbol table already contains the specified key.
     * Deletes the specified key (and its associated value) from this symbol table
     * if the specified value is {@code null}.
     *
     * @param  key the key
     * @param  val the value
     * @throws IllegalArgumentException if {@code key} is {@code null}
     */
    
    /**
     * Returns the value associated with the given key.
     *
     * @param  key the key
     * @return the value associated with the given key if the key is in the symbol table
     *         and {@code null} if the key is not in the symbol table
     * @throws IllegalArgumentException if {@code key} is {@code null}
     */
    public Value get(Key key) {
        Node x = root;
        while (x != null) {
            int res = key.compareTo(x.key);
            if      (res < 0) x = x.left;
            else if (res > 0) x = x.right;
            else return x.val;
        }
        return null;
    }

    // private Value get(Node x, Key key) {
       
    //}
    public void put( Key key, Value val) {
        Node z = new Node(key, val,1);
        if (root == null) {
            root = z;
            return;
        }

        Node parent = null, x=root; 
    
        while (x != null) {
            parent = x;
            int cmp = key.compareTo(x.key);
            if      (cmp < 0) x = x.left;
            else if (cmp > 0) x = x.right;
            else {
                x.val = val;
                return; 
            }
        }
        int cmp = key.compareTo(parent.key);
        if (cmp < 0) parent.left  = z;
        else         parent.right = z;
    }

    // private Node put(Node x, Key key, Value val) {
   
    // }


    
    // deleting specific key-value pair from the tree
    //   public void deleteMin() {
        
    //     root = deleteMin(root);
        
    // }

    // private Node deleteMin(Node x) {
    //     if (x.left == null) return x.right;
    //     x.left = deleteMin(x.left);
    //     x.n = size(x.left) + size(x.right) + 1;
    //     return x;
    // }
    // public void delete(Key key) {
    //     root = delete(root, key);
        
    // }

    // private Node delete(Node x, Key key) {
    //     if (x == null) return null;
    //     int cmp = key.compareTo(x.key);
    //     if      (cmp < 0) x.left  = delete(x.left,  key);
    //     else if (cmp > 0) x.right = delete(x.right, key);
    //     else { 
    //         if (x.right == null) return x.left;
    //         if (x.left  == null) return x.right;
    //         Node t = x;
    //         x = min(t.right);
    //         x.right = deleteMin(t.right);
    //         x.left = t.left;
    //     } 
    //     x.n = size(x.left) + size(x.right) + 1;
    //     return x;
    // } 


    /**
     * Returns the smallest key in the symbol table.
     *
     * @return the smallest key in the symbol table
     * @throws NoSuchElementException if the symbol table is empty
     */
    public Key min() {
        return minval(root).key;
    } 

    private Node minval(Node x) { 
         if(x==null) return null;
         while(x.left!=null) x =x.left;
         return x;
    } 

   

    /**
     * Returns the largest key in the symbol table less than or equal to {@code key}.
     *
     * @param  key the key
     * @return the largest key in the symbol table less than or equal to {@code key}
     * @throws NoSuchElementException if there is no such key
     * @throws IllegalArgumentException if {@code key} is {@code null}
     */
     public Key floor(Key key)
    {
        Node n=floor2(root,key);
       if (n==null)
       {
        System.out.println("floor value does not exist");
        }
        return n.key;          
        
        
    }

    private Node floor2(Node x, Key key)
    {
        Node t=null;
        while(x!=null)
        {
            int cmp=key.compareTo(x.key);
            if (cmp==0)
                return x;
            if(cmp>0)
            {
                t=x;
                x=x.right;
            }
            else
            {
                x=x.right;
            }
    
        }
        return t;
    }
    
    

    /**
     * Return the key in the symbol table whose rank is {@code k}.
     * This is the (k+1)st smallest key in the symbol table.
     *
     * @param  k the order statistic
     * @return the key in the symbol table of rank {@code k}
     * @throws IllegalArgumentException unless {@code k} is between 0 and
     *        <em>n</em>–1
     */
   public Key select(int rank)
    {
        if (rank < 0 || rank >= size())  return null;
        Node x = selectnode(root, rank);
        return x.key;
        // return selectnode(root,rank);
        // return x.key;
        
    }

    // Return key of rank k. 
    private Node selectnode(Node x, int rank)
    {
        int count= -1;

        Stack<Node> link=new Stack<Node>();
        Node cur=root;
        while(!link.isEmpty() || cur!=null)
        {
            if(cur!=null){
                link.push(cur);
                cur=cur.left;
            }
            else{
                cur=link.pop();
                count++;
                if(count==rank)
                    break;
                cur=cur.right;
            }
        }
        return cur;      
         
    } 

    /**
     * Returns all keys in the symbol table in the given range,
     * as an {@code Iterable}.
     *
     * @param  lo minimum endpoint
     * @param  hi maximum endpoint
     * @return all keys in the symbol table between {@code lo} 
     *         (inclusive) and {@code hi} (inclusive)
     * @throws IllegalArgumentException if either {@code lo} or {@code hi}
     *         is {@code null}
     */
    public Iterable<Key> keys(Key lo, Key hi) {
      Stack<Node> stack = new Stack<Node>();
        LinkedList<Key> link = new LinkedList<Key>();
        Node x = root;
        while (x != null || !stack.isEmpty()) {
            if (x != null) {
                stack.push(x);
                x = x.left;
            }
            else {
                x = stack.pop();
                link.add(x.key);
                x = x.right;
            }
        }
        return link;
    } 

    // private void keys(Node x,LinkedList<Key> link, Key lo, Key hi) { 
    
    // } 

   
    /* Run the program by giving the approriate command obtained from
    input files through input.txt files. The output should be displayed
    exactly like the file output.txt shows it to be.*/
  
    public static void main(String[] args) { 
       Solution<String, Integer> obj = new Solution<String, Integer>();
        obj.put("ABDUL",1);
        System.out.println(obj.get("ABDUL"));
        
        obj.put("HRITHIK",2);
        obj.put("SAI",3);
        obj.put("SAMAL",6);
        
        System.out.println(obj.get("SAI"));
        obj.put("TASHI",4);
        System.out.println(obj.size());
        System.out.println(obj.min());
        
        System.out.println(obj.floor("HRITHIK"));
        System.out.println(obj.floor("HAHA"));
        System.out.println(obj.select(2));
        System.out.println(obj.keys("ABDUL","TASHI"));
       
        obj.put("CHIMI",5);
        obj.put("SAMAL",4);
        System.out.println(obj.get("SAMAL"));
       
        obj.put("NIMA",7);
        System.out.println(obj.size());
        System.out.println(obj.get("CHIMI"));
        System.out.println(obj.floor("CHIMA"));
        
        obj.put("SONAM",8);
        System.out.println(obj.keys("ABDUL","TASHI")); 
       

       
    }
}