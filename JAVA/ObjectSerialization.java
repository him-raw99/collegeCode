import java.io.*;

class Employee implements Serializable {
    private String name;
    private int age;
    private String department;

    public Employee(String name, int age, String department) {
        this.name = name;
        this.age = age;
        this.department = department;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public String getDepartment() {
        return department;
    }
}

public class ObjectSerialization {
    public static void main(String[] args) {
        Employee employee = new Employee("John Doe", 30, "Engineering");

        // Serialize the object to a file
        try (
            FileOutputStream fileOut = new FileOutputStream("employee.ser");
             ObjectOutputStream out = new ObjectOutputStream(fileOut)) {
            out.writeObject(employee);
            System.out.println("Employee object serialized successfully.");
        } catch (IOException e) {
            e.printStackTrace();
        }

        // Deserialize the object from the file
        try (FileInputStream fileIn = new FileInputStream("employee.ser");
             ObjectInputStream in = new ObjectInputStream(fileIn)) {
            Employee deserializedEmployee = (Employee) in.readObject();
            System.out.println("Employee object deserialized successfully.");
            System.out.println("Name: " + deserializedEmployee.getName());
            System.out.println("Age: " + deserializedEmployee.getAge());
            System.out.println("Department: " + deserializedEmployee.getDepartment());
        } catch (IOException | ClassNotFoundException e) {
            e.printStackTrace();
        }
    }
}
