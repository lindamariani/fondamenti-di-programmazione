package studentiEdEsami;

/* Si implementino le classi StudenteOrdinario e StudenteLavoratore.
Entrambe le classi devono implementare l’interfaccia Immatricolabile.
La classe StudenteLavoratore rappresenta studenti lavoratori. Uno studente lavoratore `e caratterizzato da una
matricola e dal nome dell’azienda in cui lavora. La classe deve sovrascrivere il metodo equals. Due studenti
lavoratori sono uguali per il metodo equals se hanno la stessa matricola e lavorano nella stessa azienda*/

public class StudenteLavoratore implements Immatricolabile {
	String matricola;
	String nomeAzienda;
	
	@Override
	public String getMatricola() {
		return matricola;
	}
	
	public String getNomeAzienda() {
		return nomeAzienda;
	}
	
	@Override
	public boolean equals(Object obj) {
		if(this == obj) return true;
		if(obj == null || this.getClass() != obj.getClass()) return false;
		StudenteLavoratore other = (StudenteLavoratore) obj;
		return this.matricola.equals(other.matricola) && this.nomeAzienda.equals(other.nomeAzienda);
	}
}
