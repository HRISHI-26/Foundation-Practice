
class HelloClass extends Hello {

    // Constructor just calling one function
    public HelloClass() {
        hello();
    }
    
    // Abstract methods of Abstract class should be defined here 
    void hello() {
        System.out.println("Hellooo....");
    }

    void hey() {
        System.out.println("Hey....");
    }
}
