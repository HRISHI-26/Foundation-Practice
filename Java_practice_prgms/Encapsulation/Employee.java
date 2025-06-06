
class Employee {

    private int id;
    private int salary;

    public void setDetails(int id, int salary) {
        this.id = id;
        this.salary = salary;
    }

    public void displayDetails() {
        System.out.println("ID: " + this.id);
        System.out.println("Salary: " + this.salary);
    }
}
