
package HallManagementSystem;

// ContactInfo class: follows SRP by managing contact-related details only

public class ContactInfo {
    private String email;
    private String phone;

    // Constructor, getters, and setters
    public ContactInfo(String email, String phone) {
        this.email = email;
        this.phone = phone;
    }

    public String getEmail() { 
        return email; 
    }
    public String getPhone() {
        return phone; 
    }
}
