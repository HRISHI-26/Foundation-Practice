// Abstract Class - contain abstract method which is not defined
                //- contain concrete method which is defined
                // - we cannot create OBJECT for this class  

abstract class Hello {

    abstract void hello();

    abstract void hey();

    void hi() {
        System.out.println("Hiii....");
    }
}
