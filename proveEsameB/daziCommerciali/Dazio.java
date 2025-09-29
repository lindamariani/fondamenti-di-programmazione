package daziCommerciali;

/*Si implementi una classe Dazio con i seguenti attributi:
– String nationName, che rappresenta il nome della nazione a cui si applica il dazio (immutabile)
– double rate, che rappresenta la percentuale del dazio (es. 0.25 = 25%)
La classe deve prevedere:
– un costruttore per inizializzare entrambi gli attributi
– un metodo getter per entrambi gli attributi
– un metodo setter per il valore del dazio (il nome della nazione non pu`o essere modificato)*/

public class Dazio {
	private final String nationName;
	private double rate;
	
	public Dazio(String nationName, double rate) {
		this.nationName = nationName;
		this.rate = rate;
	}
	
	public String getNationName() {
		return nationName;
	}
	
	public double getRate() {
		return rate;
	}
	
	public void setRate(double rate) {
		this.rate = rate;
	}
	
	@Override
	public boolean equals(Object obj) {
		if(this == obj) return true;
		if(!(obj instanceof Dazio)) return false;
		Dazio other = (Dazio) obj;
		return this.nationName.equals(other.nationName) && this.rate == other.rate;
	}
}
