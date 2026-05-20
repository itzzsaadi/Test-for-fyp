public class SimpleClass {
    private String name;
    public SimpleClass(String name) { this.name = name; }
    public void greet() { System.out.println("Hello, " + name); }
    public static void main(String[] args) {
        SimpleClass s = new SimpleClass("Java");
        s.greet();
    }
}
