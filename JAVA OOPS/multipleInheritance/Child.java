
class Child implements Father, Mother {

    // Method overriding
    public void intelligence() {
        System.out.println("Child got intelligence");
    }

    public void strength() {
        System.out.println("Father gave me strength");
    }

    public void love() {
        System.out.println("Mother loves me");
    }
}
