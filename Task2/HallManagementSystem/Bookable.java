
package HallManagementSystem;

// Bookable interface: ISP by defining methods for availability management

public interface Bookable {
    boolean isAvailable(); // Checks if the room is available for booking
    void setAvailability(boolean availability); // Sets the availability status of the room
}
