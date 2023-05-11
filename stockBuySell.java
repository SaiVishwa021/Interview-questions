#To find the max profit of given prices of each day.
  
public class Stock_buy_and_sell {

	public static int maxProfit(int[] prices) {
		int buy_price = prices[0];
		int profit = 0;
		for(int i = 1; i<prices.length; i++) {
			if(prices[i] < buy_price) {
				buy_price = prices[i];
			}
			else {
				int current_profit = prices[i] - buy_price;
				profit = Math.max(current_profit, profit);
//				System.out.println(buy_price);
//				System.out.println(buy_price+profit);
			}
		}
		return profit;
	}
	
	public static void main(String[] args) {
		int prices[] = {7,5,2,1,5,7,8};
		System.out.println(maxProfit(prices));
	}
}
