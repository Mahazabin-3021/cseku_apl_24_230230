
package HallManagementSystem;

// Room class: implements RoomDetails and Bookable interfaces, managing room-related information and availability
// Room class follows the Single Responsibility Principle (SRP) by managing room-specific data (number, capacity, availability)
// Room class adheres to the Open-Closed Principle (OCP) by being open for extension without modifying existing code
// Room class implements the Interface Segregation Principle (ISP) by implementing only the methods necessary for room information and availability management

public class Room implements RoomDetails, Bookable {
    private final int roomNumber; // Unique room identifier
    private final int capacity; // Maximum number of occupants in the room
    private boolean availability; // Current availability status of the room
    private boolean cancelBooking; // if a booking can be canceled

    public Room(int roomNumber, int capacity) {
        this.roomNumber = roomNumber;
        this.capacity = capacity;
        this.availability = true; // Default availability set to true
        this.cancelBooking = true; // Default cancel booking option set to true
    }

    public boolean isCancelBooking() {
        return cancelBooking;
    }

    public void setCancelBooking(boolean cancelBooking) {
        this.cancelBooking = cancelBooking;
    }

    @Override
    public int getRoomNumber() {
        return roomNumber; // Returns the room number
    }

    @Override
    public int getCapacity() {
        return capacity; // Returns the room capacity
    }

    @Override
    public boolean isAvailable() {
        return availability; // Returns availability status
    }

    @Override
    public void setAvailability(boolean availability) {
        this.availability = availability; // Sets the availability status
    }
}
