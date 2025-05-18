
import java.util.Scanner;

class Basics {

    // Class name : PascalCase
    // Method name: camelCase
    public static void main(String[] args) {

        // Printing statement
        System.out.println("Hello, World!!!");

        // Variable Initialization
        String name = "Java";
        float version = 24.1f; //f for representing float

        // Concatenation
        System.out.println("Programming in " + name + " " + version);

        // Reading a number
        int num;
        // Class for reading input
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number:");
        num = sc.nextInt();
        System.out.println("Your have entered: " + num);

        // Control Statements
        // If - else Ladder
        System.out.print("Enter a number:");
        int number = sc.nextInt();
        if (number > 0) {
            System.out.println("Positive number");
        } else {
            System.out.println("Negative number");
        }

        // for loop
        for (int i = 0; i < 5; i++) {
            System.out.println(i + " ");
        }

        // function call
        charDisplay('H');
    }

    // function definition
    static void charDisplay(char ch) {
        System.out.println("Charachter: " + ch);
    }
}
