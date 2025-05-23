
class Main {

    public static void main(String[] args) {
        SampleThreading st1 = new SampleThreading();
        SampleThreading st2 = new SampleThreading();
        SampleThreading st3 = new SampleThreading();

        
        st1.start();
        st2.start();
        st3.start();

    }
}
