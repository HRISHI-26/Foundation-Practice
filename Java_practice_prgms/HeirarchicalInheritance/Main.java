// Task: This is Heirarchical inheritance
//      Write a Java program to demonstrate hierarchical inheritance 
//      with a base class Vehicle, and two derived classes Car and Bike.
//      The base class should have a method info() that prints "This is a vehicle",
//      and the derived classes should have their own methods:
//      class Main {Car has carInfo() which prints "This is a car"
//      Bike has bikeInfo() which prints "This is a bike"

class Main {

    public static void main(String args[]) {

        Vehicle v = new Vehicle();
        Car c = new Car();
        Bike b = new Bike();

        v.info();

        c.carInfo();
        c.info();

        b.bikeInfo();
        b.info();
    }
}
