class Main{
    public static void main(String[] args) {
        
        // Object Creation
        Sum s1 = new Sum();

        // Assigning values into object variables
        s1.num1 = 10;
        s1.num2 = 20;

        // Calling funtion using object
        s1.calculateSum(s1.num1, s1.num2);
        s1.displaySum();
    }
}