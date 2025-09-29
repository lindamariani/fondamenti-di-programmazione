package portafoglioIvestimenti;

/*Si implementi una classe astratta che rappresenta un asset d’investimento con i seguenti attributi:
– String name, che rappresenta il nome dell’asset
– double purchasePrice, che rappresenta il prezzo di acquisto
– double quantity, che rappresenta la quantit`a posseduta.
La classe deve implementare:
– un costruttore per inizializzare gli attributi
– un metodo getter per ciascun attributo
– un metodo astratto int getRiskLevel() che restituisce il livello di rischio dell’asset
– un metodo astratto double getCurrentValue() che restituisce il valore corrente dell’asset
– un metodo double calculateProfit() che calcola il profitto o la perdita come:
(getCurrentValue() − purchasePrice) ∗ quantity
Si ridefinisca inoltre il metodo equals: due asset d’investimento sono uguali se hanno lo stesso nome.
Le classi Stock (azioni) e Bond (obbligazioni) estendono la classe InvestmentAsset. Si implementi solamente la
classe Stock, di seguito descritta.
*/

public abstract class Asset {
	private String nome;
	private double purchasePrice;
	protected double quantity;
	
	public Asset(String nome, double purchasePrice, double quantity) {
		this.nome = nome;
		this.purchasePrice = purchasePrice;
		this.quantity = quantity;
	}
	
	public String getNome() {
		return nome;
	}
	
	public double getPurchasePrice() {
		return purchasePrice;
	}
	
	public double getQuantity() {
		return quantity;
	}
	
	public abstract int getRiskLevel();
	
	public abstract double getCurrentValue();
	
	public double calculateProfit() {
		return (getCurrentValue() - purchasePrice) * quantity;
	}
	
	@Override
	public boolean equals(Object obj) {
		if(obj == null || this.getClass() != obj.getClass()) return false;
		Asset other = (Asset) obj;
		return this.nome.equals(other.nome);
	}
}
