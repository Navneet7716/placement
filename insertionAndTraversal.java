class insertionAndTraversal {

  
    public static void main(String[] args) {

        Node root = new Node();

        root = root.insertion(root, 10);
        root = root.insertion(root, 20);
        root = root.insertion(root, 30);
        root = root.insertion(root, 40);
        root = root.insertion(root, 50);
        root = root.insertion(root, 60);
        root = root.insertion(root, 70);

        root.inorder(root);
    }
}


class Node {
    public int data;
    public Node right;
    public Node left;

    Node(int data) {this.data = data;}
    Node(){}

    Node insertion(Node node, int data) {
        if (node == null) return new Node(data);

        if (node.data > data) {
            node.left = insertion(node.left, data);
        }
        else {
            node.right = insertion(node.right, data);
        }

        return node;
    }

    void inorder(Node root) {
        if (root == null) return;

        inorder(root.left);
        System.out.print(root.data+ " ");
        inorder(root.right);
    }
}
