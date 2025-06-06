// Task: Create an abstract class Animal with an abstract method sound().
//       Create a subclass Dog that extends Animal and implements the sound()
//       method to print "Dog barks".
//       Write a program to create a Dog object and call the sound() method.

class Main {

    public static void main(String args[]) {
        Dog d = new Dog();
        d.sound();
    }
}
