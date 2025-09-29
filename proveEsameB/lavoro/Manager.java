package lavoro;

/*La classe Manager `e caratterizzata da un team, ovvero un insieme di impiegati di base che un manager gestisce (un
manager quindi non pu`o avere nel team altri manager). La classe Manager deve mettere a disposizione un unico
costruttore che prende come parametri un nome, un cognome e le ore che il manager ha lavorato ed inizializza i
campi corrispondenti. Quando costruito, un manager non ha nessun impiegato nel team.
Si ridefinisca il metodo equals. Due manager sono uguali per il metodo equals se hanno lo stesso nome, lo stesso
cognome, le stesse ore lavorate e lo stesso team.
Inoltre, la classe Manager deve mettere a disposizione un metodo aggiungiAlTeam che prende come parametro un
impiegato e lo aggiunge al team. E possibile aggiungere un impiegato al team se ha lavorato almeno 20 ore nell’anno. `
Se l’impiegato `e un manager, l’impiegato fa gi`a parte del team del manager oppure l’impiegato ha lavorato meno di
20 ore nell’anno, il metodo deve lanciare un’eccezione di tipo controllato TeamManagerException, da implementare.
Infine, la classe Manager deve essere comparabile (deve implementare l’interfaccia Comparable<Manager>). Il metodo
compareTo utilizza il numero di impiegati nel team dei manager per il confronto.
I (+3pt) La classe Manager deve essere iterabile (deve implementare l’interfaccia Iterable<Impiegato>), in modo
tale che sia possibile iterare sugli impiegati del team del manager*/

import java.util.Set;
import java.util.HashSet;
import java.util.Iterator;

public class Manager extends Impiegato implements Comparable<Manager>, Iterable<Impiegato> {
	Set<Impiegato> team;
	
	public Manager(String nome, String cognome, int oreAnno) {
		super(nome, cognome, oreAnno);
		team = new HashSet<>();
	}
	
	@Override
	public double getStipendioAnnuale() {
		return 25.90 * oreAnno;
	}
	
	Set<Impiegato> getTeam() {
		return team;
	}
	
	@Override
	public boolean isManager() {
		return true;
	}
	
	void aggiungiAlTeam(Impiegato nuovo) {
		if(nuovo.getOreAnno() < 20)
			throw new TeamManagerException("L'impiegato ha lavorato meno di 20 ore. ");
		for(Impiegato i : team) {
			if(i.equals(nuovo))
				throw new TeamManagerException("Impiegato gia' presente nel team. ");
		}
		if(nuovo.isManager()) {
			throw new TeamManagerException("Un manager non puo' essere un impiegato. ");
		}
		team.add(nuovo);
	}
	
	@Override
	public int compareTo(Manager other) {
		return Integer.compare(team.size(), other.team.size());
	}
	
	@Override
	public Iterator<Impiegato> iterator() {
		return team.iterator();
	}
	
	@Override
	public boolean equals(Object obj) {
		if(this == obj) return true;
		if(obj == null || this.getClass() != obj.getClass()) return false;
		Manager other = (Manager) obj;
		return nome.equals(other.nome) &&
				cognome.equals(other.cognome) &&
				oreAnno == other.oreAnno &&
				team.equals(other.team);
	}
}
