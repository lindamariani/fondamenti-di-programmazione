package lavoro;

/*Si implementino le classi ImpiegatoBase e Manager, sottoclassi di Impiegato. Per l’implementazione del metodo
getStipendioAnnuale nelle classi ImpiegatoBase e Manager: un ImpiegatoBase ha un importo orario pari a
15.50e, mentre un Manager di 25.90e.
La classe ImpiegatoBase deve mettere a disposizione un unico costruttore che prende come parametri un nome, un
cognome e le ore che l’impiegato base ha lavorato in un anno ed inizializza i campi corrispondenti. Si ridefinisca il
metodo equals. Due impiegati base sono uguali per il metodo equals se hanno lo stesso nome, lo stesso cognome
e le stesse ore lavorate.*/

public class ImpiegatoBase extends Impiegato {
	public ImpiegatoBase(String nome, String cognome, int oreAnno) {
		super(nome, cognome, oreAnno);
	}
	
	@Override
	public double getStipendioAnnuale() {
		return 15.50 * oreAnno;
	}
	
	@Override 
	public boolean equals(Object obj) {
		if(this == obj) return true;
		if(obj == null || this.getClass() != obj.getClass()) return false;
		ImpiegatoBase other = (ImpiegatoBase) obj;
		return nome.equals(other.nome) && cognome.equals(other.cognome) && oreAnno == other.oreAnno;
	}
}
