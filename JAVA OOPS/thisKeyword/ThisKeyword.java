
class ThisKeyword {

    int num1, num2;

    public ThisKeyword(int num1, int num2) {

        // this.globalVariable = localVariable
        // this: keyword is used to access global variable
        this.num1 = num1;
        this.num2 = num2;

        System.out.println("Global variable: ");
        display(this.num1, this.num2);
        
        System.out.println("Local variable: ");
        display(num1, num2);

    }

    void display(int number1, int number2) {
        System.out.println("No: " + number1);
        System.out.println("No: " + number2);
    }

}
