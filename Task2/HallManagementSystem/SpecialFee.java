
package HallManagementSystem;

// SpecialFee class: extends Fee, adds scholarship discount calculation
// Liskov Substitution Principle : allowing SpecialFee to be used anywhere a Fee is expected without changing the program's behavior

public class SpecialFee extends Fee {
    private double scholarshipDiscount; // discount amount
    private double rate; // discount rate (e.g., 0.1 for 10% discount)

    public SpecialFee(int id, double amount, double rate) {
        super(id, amount);
        this.rate = rate;
    }

    // Override getAmount to calculate amount after discount
    @Override
    public double getAmount() {
        double discountAmount = super.getAmount() * rate;
        return super.getAmount() - discountAmount; // apply discount
    }

    public double getScholarshipDiscount() {
        return scholarshipDiscount;
    }

    public void setScholarshipDiscount(double rate) {
        this.rate = rate;
    }
}