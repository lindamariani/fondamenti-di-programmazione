package daziCommerciali;

import java.util.*;

/*Si implementi una classe Confine che rappresenta il confine di una nazione e contiene:
– String nationName, il nome della nazione di cui rappresenta il confine
– un insieme di dazi applicati alle nazioni confinanti
La classe deve prevedere:
– un costruttore che inizializza il nome della nazione e l’insieme di dazi (inizialmente vuoto)
– un metodo void addDazio che aggiunge un dazio
– un metodo double getDazio(String nationName) che, data una nazione, ritorna il valore del dazio applicato
(ritorna 0 se il dazio per quella nazione non `e presente)
– un metodo void updateDazio(String nationName, double newRate) che aggiorna il valore del dazio relativo a una data nazione, se presente
– sovrascrivere il metodo equals. Due confini sono uguali se hanno lo stesso nome e gli stessi dazi
*/

public class Confine implements Iterable<Dazio> {
	private String nationName;
	private Set<Dazio> dazi;
	
	public Confine(String nationName) {
		this.nationName = nationName;
		this.dazi = new HashSet<>();
	}
	
	public String getNationName() {
		return nationName;
	}
	
	public void addDazio(Dazio d) {
		dazi.add(d);
	}
	
	public double getDazio(String nationName) {
		//prendi il set di dazi (composto da [nazione, rate])
		//e trova quello che corrisponde al nationName dato, poi restituisci il suo rate
		for(Dazio d : dazi) {
			if(d.getNationName().equals(nationName))
				return d.getRate();
		}
		return 0.0;
	}
	
	void updateDazio(String nationName, double newRate) {
		for(Dazio d : dazi) {
			if(d.getNationName().equals(nationName)) {
				d.setRate(newRate);
				return;
			}
		}
	}
	
	@Override
	public boolean equals(Object obj) {
		if(this == obj) return true;
		if(!(obj instanceof Confine)) return false;
		Confine other = (Confine) obj;
		return this.nationName.equals(other.nationName) && this.dazi.equals(other.dazi);
	}
	
	//da fare se si implementa <iterable>, se no non va
	@Override
	public Iterator<Dazio> iterator() {
		return dazi.iterator();
	}
}
