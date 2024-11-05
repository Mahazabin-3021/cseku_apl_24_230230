
package HallManagementSystem;
import java.util.List;

// Hall class: holds hall-related details, including name, address, and room list
// Hall class: follows SRP by managing contact-related informations
//Dependency Inversion Principle:It directly depends on classes (Address and List)

public class Hall {
    private String hallName;
    private Address address;
    private List<String> roomList;

    // Constructor, getters, and setters
    public Hall(String hallName, Address address, List<String> roomList) {
        this.hallName = hallName;
        this.address = address;
        this.roomList = roomList;
    }

    public String getHallName() { 
        return hallName; 
    }
    public Address getAddress() { 
        return address; 
    }
    public List<String> getRoomList() {
        return roomList; 
    }
}
