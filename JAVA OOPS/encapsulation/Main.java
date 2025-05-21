
class Main {

    public static void main(String[] args) {

        Product p = new Product();

        // Passing values into Encapsulated class
        p.setproductId(218152015);
        p.setproductName("Encapsulation Technique");

        // Accessing values from Encapsulated class
        System.out.println("Product Name: " + p.getproductName());
        System.out.println("Product ID: " + p.getproductId());
    }
}
