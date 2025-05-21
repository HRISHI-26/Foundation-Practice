
class MethodOverloading {

    int num1 = 10;
    int num2 = 20;
    int result;

    // Method Overloading is defining method of same name 
    //      with difference in no: of arguments
    void sum() {
        result = num1 + num2;
        System.out.println("Result: " + result);
    }

    void sum(int num1, int num2) {
        result = num1 + num2;
        System.out.println("Result: " + result);
    }
}
