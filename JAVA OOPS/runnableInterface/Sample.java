
class Sample implements Runnable {

    public void run() {
        try {
            for (int i = 0; i < 10; i++) {
                System.out.println("Hi");
            }
        } catch (Exception e) {
        }
    }
}
