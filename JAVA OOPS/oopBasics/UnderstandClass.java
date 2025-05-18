
class UnderstandClass {

    public static void main(String[] args) {

        //  Object Creation
        SecondClass sc1 = new SecondClass();
        SecondClass sc2 = new SecondClass();

        // Accessing class parameters using object
        sc1.object = "Object 1: Hi..";
        sc2.object = "Object 2: Hello...";

        System.out.println("SC1 -> " + sc1.object);
        System.out.println("SC2 -> " + sc2.object);

        // Function call to another Class
        sc1.displayName("I am Object 1");
        sc2.displayName("I am Object 2");
    }
}
