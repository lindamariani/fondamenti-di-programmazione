package portafoglioIvestimenti;

/*La classe Stock estende InvestmentAsset e rappresenta un’azione e ha i seguenti attributi aggiuntivi:
– String sector, che rappresenta il settore di appartenenza
– double currentPrice, che rappresenta il prezzo corrente
La classe Stock deve:
– implementare un costruttore per inizializzare tutti gli attributi (inclusi quelli ereditati)
– implementare il metodo double getCurrentValue() come currentPrice * quantity
– implementare il metodo int getRiskLevel() secondo la seguente logica: 3 se il settore `e "Tech", 2 se il settore
`e "Healthcare", 1 altrimenti.*/

public class Stock extends Asset {
	private String sector;
	private double currentPrice;
	
	public Stock(String nome, double purchasePrice, double quantity, String sector, double currentPrice) {
		super(nome, purchasePrice, quantity);
		this.sector = sector;
		this.currentPrice = currentPrice;
	}
	
	public String getSector() {
		return sector;
	}
	
	@Override
	public double getCurrentValue() {
		return currentPrice * quantity;
	}
	
	@Override
	public int getRiskLevel() {
		if(this.getSector().equals("Tech")) return 3;
		if(this.getSector().equals("Healthcare")) return 2;
		
		return 1;
	}
}

