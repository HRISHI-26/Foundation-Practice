
class Product {
    // This is an Encapsulated class
    // Here parameters will be protected or private
    // We use getter and setter functions for parameter manipulation

    String productName;
    int productId;

    // Getter function - help other class to access parameters
    public int getproductId() {
        return productId;
    }

    public String getproductName() {
        return productName;
    }

    // Setter function - help object to pass value to parameters
    public void setproductId(int productId) {
        this.productId = productId;
    }

    public void setproductName(String productName) {
        this.productName = productName;
    }
}
