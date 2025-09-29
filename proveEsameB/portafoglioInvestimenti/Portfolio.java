package portafoglioIvestimenti;

import java.util.Set;

/*La classe Portfolio rappresenta un portafoglio d’investimenti appartenente a un proprietario e ha i seguenti attributi:
– String id, che rappresenta un identificativo univoco del portafoglio
– String owner, che rappresenta il nome del proprietario del portafoglio
– Set<InvestmentAsset> assets, che rappresenta l’insieme degli asset d’investimento presenti nel portafoglio
La classe deve implementare:
– un costruttore che inizializza gli attributi id e owner. Quando costruito, l’insieme degli asset del portafoglio `e
vuoto
– un metodo void addAsset(InvestmentAsset asset) che aggiunge un asset al portafoglio. Se `e gi`a presente
un asset con lo stesso nome, il metodo deve lanciare un’eccezione di tipo non controllato
– un metodo double calculateTotalValue() che restituisce la somma dei valori correnti (getCurrentValue())
di tutti gli asset presenti nel portafoglio
– un metodo Set<InvestmentAsset> getAssetsByRiskLevel(int level) che restituisce l’insieme degli asset
presenti nel portafoglio il cui livello di rischio (restituito da getRiskLevel()) `e uguale al valore specificato
▶ (+2pt) La classe Portfolio deve essere iterabile (deve implementare l’interfaccia Iterable<InvestmentAsset>)
in modo da poter iterare sugli asset del portafoglio.*/


import java.util.HashSet;
import java.util.Iterator;

public class Portfolio implements Iterable<Asset> {
	String id;
	String owner;
	Set<Asset> assets;
	
	public Portfolio(String id, String owner) {
		this.id = id;
		this.owner = owner;
		this.assets = new HashSet<>(); 
	}
	
	public String getId() {
		return id;
	}
	
	public String getOwner() {
		return owner;
	}
	
	public void addAsset(Asset asset) {
		for(Asset a : assets) {
			if(a.equals(asset)) 
				throw new IllegalArgumentException("Asset con nome già presente! ");
		}
		assets.add(asset);
	}
	
	public double calculateTotalValue() {
		double somma = 0.0;
		for(Asset a : assets) {
			somma += a.getCurrentValue();
		}
		return somma;
	}
	
	public Set<Asset> getAssetsByRiskLevel(int level) {
		Set<Asset> other = new HashSet<>();
		for(Asset a : assets) {
			if(a.getRiskLevel() == level)
				other.add(a);
		}
		return other;
	}
	
	public Iterator<Asset> iterator() {
		return assets.iterator();
	}
}
