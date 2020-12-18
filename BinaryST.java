import java.util.*;

public class BinaryST<Key extends Comparable<Key>, Value> {
    Node root;  

    private class Node {
        Key key;           
        Value val;         
        Node left, right;  
         int size;
                
        public Node(Key key, Value val,int n) {
            this.key = key;
            this.val = val;
            this.size = 1;
            
        }
    }
    public BinaryST() {
       root=null;
    }
    
    public int size() {
        return size(root);
    }
    public boolean isEmpty(){
        if(size()==0){
            return true;
        }
        return false;
    }

    public int size(Node x) {
        if (x == null) return 0;
        return 1 + size(x.left) + size(x.right);
    }

    public Value get(Key key) {
        return get(root, key);
    }

    private Value get(Node x, Key key) {
        if (key == null) {
            System.out.println("Keys should not be null");
        }
        if (x == null)  return null;

        while(x!= null){
            int cmp = key.compareTo(x.key);

            if (cmp < 0) 
                return get(x.left, key);

            else if (cmp > 0) 
                return get(x.right, key);

            else              
                return x.val;
        }
        return null;
        
    }
   
   public void put(Key key, Value val) {
        if (key == null) System.out.println("ohhho ewww");;
        if (val == null) {
            delete(key);
            return;
        }
        root = put(root, key, val);
        //assert check();
    }

    private Node put(Node x, Key key, Value val) {
        if (x == null) 
            return new Node(key, val, 1);

        int cmp = key.compareTo(x.key);

        if      (cmp < 0) 
            x.left  = put(x.left,  key, val);

        else if (cmp > 0) 
            x.right = put(x.right, key, val);

        else             
            x.val   = val;

        x.size = 1 + size(x.left) + size(x.right);
        return x;
    }
    public void delete(Key key) {
        if (key == null) {
            System.out.println("nonono");
        }
        root = delete(root, key);
        
        
    }

    private Node delete(Node x, Key key) {
        if (x == null) return null;

        int cmp = key.compareTo(x.key);
        if      (cmp < 0) x.left  = delete(x.left,  key);
        else if (cmp > 0) x.right = delete(x.right, key);
        else { 
            if (x.right == null) return x.left;
            if (x.left  == null) return x.right;
            Node t = x;
            x = min(t.right);
            //x.right = (t.right);
            x.left = t.left;
        } 
        x.size = size(x.left) + size(x.right) + 1;
        return x;
    } 
    
    public Key min() {
        if (isEmpty()) {
            System.out.println("The tree is empty");
        }
        return min(root).key;
    } 

    private Node min(Node x) { 
        if (x.left == null) 
            return x; 
        else               
            return min(x.left); 
    } 

    public Key floor(Key key) {

        Node x = floor(root, key);

        if (x == null) {
            System.out.println("argument of floor is too small yar");
        }
        
            return x.key;
          
    } 

    private Node floor(Node x, Key key) {
        if (x == null) 
            return null;

        int cmp = key.compareTo(x.key);
        if (cmp == 0) 
            return x;

        if (cmp <  0) 
            return floor(x.left, key);

        Node t = floor(x.right, key); 
        if (t != null) 
            return t;

        else 
            return x; 
    } 
   
    public Iterable<Key> keys(Key lo, Key hi) {
       if(lo==null || hi==null){
        System.out.println("error");
       }

        LinkedList<Key> link = new LinkedList<Key>();
        keys(root, link, lo, hi);
        return link;
    } 

    private void keys(Node x, LinkedList<Key> arr, Key lo, Key hi) { 
        if (x == null) return; 
        int cmplo = lo.compareTo(x.key); 
        int cmphi = hi.compareTo(x.key); 
        if (cmplo < 0) 
            keys(x.left, arr, lo, hi);

        if (cmplo <= 0 && cmphi >= 0) 
            arr.add(x.key);

        if (cmphi > 0) 
            keys(x.right, arr, lo, hi); 
    } 
    public static void main(String[] args) {
        BinaryST<String, Integer> obj = new BinaryST<String,Integer>();
         obj.put("Ada",1);
        obj.put("Ballerina",3);
        System.out.println(obj.get("Ada"));

        obj.put("Html",5);
        obj.put("Java",7);
        System.out.println(obj.get("Java"));

        System.out.println("the size of the BST is: "+obj.size());
        System.out.println(obj.min());
        System.out.println(obj.floor("Ballerina"));
        //System.out.println(obj.select(3));
        System.out.println(obj.keys("Ada","Java"));

        obj.put("Java",8);
        obj.put("Dart",9);
        System.out.println(obj.get("Java"));
        System.out.println("the size of the BST is: "+obj.size());
        //System.out.println(obj.deletemin());
        System.out.println(obj.keys("Ballerina","Java"));
        //System.out.println(obj.delete("Java"));
    }
    

}   


