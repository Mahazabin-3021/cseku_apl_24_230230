
package HallManagementSystem;

// Fee class: handles basic fee operations, implements Payable
// Fee class: follows SRP by managing payment only

public class Fee implements Payable {
    private double amount;
    private final int id;
    private boolean isPaid;

    public Fee(int id, double amount) {
        this.id = id;
        this.amount = amount;
        this.isPaid = false; // default to unpaid
    }

    // Method to process the fee payment
    @Override
    public void payFee(double amount) {
        if (!isPaid && this.amount == amount) {
            this.isPaid = true;
            System.out.println("Fee payment of $" + amount + " successful.");
        } else {
            System.out.println("Invalid payment or already paid.");
        }
    }

    // Check if the fee is paid
    @Override
    public boolean isPaid() {
        return isPaid;
    }

    // Getter for amount
    public double getAmount() {
        return amount;
    }
}
