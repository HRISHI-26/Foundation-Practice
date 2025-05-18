        //  THE MAIN IS A STATIC FUNCTION
//      a static function can only call another static variable or 
//      function directly even if in same class.

class Main {

    char ch = 'A';
    static char ch2 = 'Z';

    public static void main(String[] args) {

        // System.out.println(ch); -> shows error while accessing
        Main ob = new Main();
        System.out.println(ob.ch); // object is required

        // Calling static variable directly
        System.out.println(ch2);

        // Calling function using object
        ob.hello();

        // Calling function directly
        hi();

    }

    void hello() {
        System.out.println("Helloo!!!");
    }

    static void hi() {
        System.out.println("Hi....");
    }
}
