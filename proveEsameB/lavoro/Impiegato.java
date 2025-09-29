package lavoro;

/* Si implementi una classe astratta Impiegato. Ogni impiegato `e caratterizzato da un nome, un cognome e le ore
che l’impiegato ha lavorato in un anno (si definiscano i metodi getter per gli attributi corrispondenti). La classe
Impiegato deve ridefinire il metodo equals. Due impiegati sono uguali se hanno lo stesso nome, lo stesso cognome
e se hanno lavorato lo stesso numero di ore. Inoltre, deve definire un metodo astratto getStipendioAnnuale che
ritorna un valore di tipo double.
*/

public abstract class Impiegato {
	protected String nome;
	protected String cognome;
	protected int oreAnno;
	
	public Impiegato(String nome, String cognome, int oreAnno) {
		this.nome = nome;
		this.cognome = cognome;
		this.oreAnno = oreAnno;
	}
	
	public String getNome() {
		return nome;
	}
	
	public String getCognome() {
		return cognome;
	}
	
	public int getOreAnno() {
		return oreAnno;
	}
	
	public boolean isManager() {
		return false;
	}
	
	public abstract double getStipendioAnnuale();
	
	@Override
	public boolean equals(Object obj) {
		if(this == obj) return true;
		if(obj == null || this.getClass() != obj.getClass()) return false;
		Impiegato other = (Impiegato) obj;
		return nome.equals(other.nome) && cognome.equals(other.cognome) && oreAnno == other.oreAnno;
	}
}
