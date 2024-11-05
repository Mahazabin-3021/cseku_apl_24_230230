
package HallManagementSystem;

// Student class adheres to the Single Responsibility Principle (SRP) by encapsulating only student-related data and functionality
// Student class demonstrates the Open-Closed Principle (OCP) by being open for extension 

public class Student {
    private String name;
    private int id;
    private String department;
    private Address address; 
    private ContactInfo contactInfo; 

    // Constructor, getters, and setters
    public Student(String name, int id, String department, Address address, ContactInfo contactInfo) {
        this.name = name;
        this.id = id;
        this.department = department;
        this.address = address;
        this.contactInfo = contactInfo;
    }

    public String getName() { 
        return name; 
    }
    public int getId() { 
        return id;
    }
    public String getDepartment() { 
        return department; 
    }
    public Address getAddress() { 
        return address; 
    }
    public ContactInfo getContactInfo() { 
        return contactInfo; 
    }
}
