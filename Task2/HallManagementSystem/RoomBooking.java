
package HallManagementSystem;
import java.time.LocalDate; // Import the LocalDate class

// RoomBooking class: implements Bookable interface and manages room booking
//follows SRP by managing room-booking related details 
// RoomBooking class depends on the abstract Bookable interface that follows Dependency Inversion Principle (DIP).

public class RoomBooking {
    private final Bookable room; // Using Bookable interface instead of a specific Room class
    private final LocalDate startDate; // Start date of the booking
    private final LocalDate endDate; // End date of the booking

    public RoomBooking(Bookable room, LocalDate startDate, LocalDate endDate) {
        this.room = room; // Assigns the Bookable room object (like a Room)
        this.startDate = startDate;
        this.endDate = endDate;
    }

    // Method to check if the room is available
    public boolean checkAvailability() {
        return room.isAvailable(); // Checks availability using Bookable interface
    }

    // Method to set room availability status
    public void updateAvailability(boolean availability) {
        room.setAvailability(availability); // Sets availability using Bookable interface
    }

    // Getters for startDate and endDate
    public LocalDate getStartDate() {
        return startDate;
    }

    public LocalDate getEndDate() {
        return endDate;
    }
}