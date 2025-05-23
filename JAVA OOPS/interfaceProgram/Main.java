
class Main implements Vehicle {
 
    // All abstract classes are defined by sub class
    public void car() {
        System.out.println("Car is driving!!!");
    }

    public void jeep() {
        System.out.println("Jeep is driving!!!");
    }

    public static void main(String[] args) {
        Main m = new Main();
        m.car();
        m.jeep();
    }
}
