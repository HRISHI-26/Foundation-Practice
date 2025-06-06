// Task: Create three classes:
//      Animal with a method eat(), Dog that extends Animal with a method bark(),
//      and BabyDog that extends Dog with a method weep().
//      Write a program to create an object of BabyDog and call all three methods.

class Main {

    public static void main(String args[]) {

        Puppy bd = new Puppy();

        bd.eat();
        bd.bark();
        bd.weep();
    }
}
