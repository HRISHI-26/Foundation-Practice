
class Main {

    public static void main(String[] args) {
        HelloClass hc = new HelloClass();

        // Object is used to call defined function in sub class
        hc.hey();

        // Object can also call functions in Base class
        hc.hi();
    }
}
