
package HallManagementSystem;

// Address class: follows SRP by handling address-related information only

public class Address {
    private String village;
    private String upazilla;
    private String zilla;
    // Constructor, getters, and setters
    public Address(String village, String upazilla, String zilla) {
        this.village = village;
        this.upazilla = upazilla;
        this.zilla = zilla;
    }

    public String getVillage() {
        return village;
    }

    public String getUpazilla() {
        return upazilla;
    }

    public String getZilla() {
        return zilla;
    }
    
}
