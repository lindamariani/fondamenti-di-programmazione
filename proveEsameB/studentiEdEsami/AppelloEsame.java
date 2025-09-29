package studentiEdEsami;

/* Si implementi la classe AppelloEsame che modella un appello di un esame. Un appello d’esame `e caratterizzato dal
nome dell’esame, dall’anno accademico in cui si svolge l’appello e il numero di iscritti. In ogni appello, `e possibile
accettare fino a un massimo di 50 iscrizioni per gli studenti ordinari e fino a un massimo di 50 iscrizioni per gli
studenti lavoratori. La classe deve definire:
– un unico costruttore che prende come parametri il nome dell’esame e l’anno accademico in cui si svolge l’appello
ed inizializza i campi corrispondenti. Quando costruito, un appello d’esame non ha iscritti;
– un metodo iscrivi che iscrive uno studente all’appello d’esame su cui `e invocato il metodo. Se lo studente `e gi`a
iscritto all’appello d’esame, il metodo deve lanciare un’eccezione di tipo controllato AppelloEsameException,
da implementare. Se l’iscrizione dello studente specificato come parametro viola i vincoli di iscrizione precedentemente descritti, il metodo deve lanciare l’eccezione AppelloEsameException;
– il metodo equals (che ridefinisce quello della classe Object). Due appelli d’esame sono uguali se hanno lo
stesso nome d’esame, lo stesso anno accademico e gli stessi iscritti.
I (+3pt) La classe AppelloEsame deve implementare l’interfaccia Comparable<T>. Il metodo compareTo utilizza il
numero di studenti lavoratori per il confronto*/

import java.util.Set;
import java.util.HashSet;

public class AppelloEsame implements Comparable<AppelloEsame> {
	String nomeEsame;
	int annoAccAppello;
	int numeroIscritti;
	Set<StudenteOrdinario> ordinari;
	Set<StudenteLavoratore> lavoratori;
	
	public AppelloEsame(String nomeEsame, int annoAccAppello) {
		this.annoAccAppello = annoAccAppello;
		this.nomeEsame = nomeEsame;
		numeroIscritti = 0;
		ordinari = new HashSet<>();
		lavoratori = new HashSet<>();
	}
	
	public String getNomeEsame() {
		return nomeEsame;
	}
	
	public int getAnnoAccAppello() {
		return annoAccAppello;
	}
	
	public int getNumeroIscritti() {
		return numeroIscritti;
	}
	
	public Set<StudenteOrdinario> getOrdinari() {
		return ordinari;
	}
	
	public int getNumeroOrdinari() {
		return ordinari.size();
	}
	
	public Set<StudenteLavoratore> getLavoratori() {
		return lavoratori;
	}
	
	public int getNumeroLavoratori() {
		return lavoratori.size();
	}
	
	public void iscrivi(Immatricolabile studente) throws AppelloEsameException {
		if(studente instanceof StudenteOrdinario) {
			if(ordinari.contains(studente))
				throw new AppelloEsameException("Studente gia' presente! ");
			if(ordinari.size() == 50)
				throw new AppelloEsameException("Posto non disponibile! ");
			ordinari.add((StudenteOrdinario) studente);
		}
		if(studente instanceof StudenteLavoratore) {
			if(lavoratori.contains(studente))
				throw new AppelloEsameException("Studente gia' presente! ");
			if(lavoratori.size() == 50)
				throw new AppelloEsameException("Posto non disponibile! ");
			lavoratori.add((StudenteLavoratore) studente);
		}
		numeroIscritti++;
	}
	
	@Override
	public int compareTo(AppelloEsame other) {
		return Integer.compare(this.getNumeroLavoratori(), other.getNumeroLavoratori());
	}
	
	@Override 
	public boolean equals(Object obj) {
		if(this == obj) return true;
		if(obj == null || this.getClass() != obj.getClass()) return false;
		AppelloEsame other = (AppelloEsame) obj;
		return this.nomeEsame.equals(other.nomeEsame) &&
				this.annoAccAppello == other.annoAccAppello &&
				this.numeroIscritti == other.numeroIscritti;
	}
}
