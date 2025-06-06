// Task: Create a base class Animal with a method makeSound() that prints "Animal makes a sound".
//       Create a derived class Cat that overrides the makeSound() method to print "Cat meows".
//       Write a program to demonstrate method overriding by calling the makeSound() method from both classes.

class Main {

    public static void main(String args[]) {

        Animal a = new Animal();
        Cat c = new Cat();

        a.makeSound();
        c.makeSound();

    }
}
