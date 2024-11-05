
package HallManagementSystem;

// Payable interface: ISP by having only specific payment-related methods

public interface Payable {
    void payFee(double amount);
    boolean isPaid();
}
