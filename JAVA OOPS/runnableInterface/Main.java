
class Main {

    public static void main(String[] args) {
        Sample s = new Sample();
        Thread th = new Thread(s);

        th.start();
    }
}
