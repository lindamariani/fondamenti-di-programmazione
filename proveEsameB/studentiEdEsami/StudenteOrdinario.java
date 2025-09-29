package studentiEdEsami;

/* Si implementino le classi StudenteOrdinario e StudenteLavoratore.
Entrambe le classi devono implementare l’interfaccia Immatricolabile.
La classe StudenteOrdinario rappresenta studenti ordinari non lavoratori. Uno studente ordinario `e caratterizzato
da una matricola e dal nome della scuola superiore di provenienza. La classe deve sovrascrivere il metodo equals.
Due studenti ordinari sono uguali per il metodo equals se hanno la stessa matricola*/

public class StudenteOrdinario implements Immatricolabile {
	String matricola;
	String nomeScuola;
	
	@Override
	public String getMatricola() {
		return matricola;
	}
	
	public String getNomeScuola() {
		return nomeScuola;
	}
	
	@Override
	public boolean equals(Object obj) {
		if(this == obj) return true;
		if(obj == null || this.getClass() != obj.getClass()) return false;
		StudenteOrdinario other = (StudenteOrdinario) obj;
		return this.matricola.equals(other.matricola);
	}
}
