package aula;

public class Prenotazione {
	Aula aula;
	String data;
	
	Prenotazione(Aula aula, String data) {
		this.aula = aula;
		this.data = data;
	}
	
	public Aula getAula() {
		return aula;
	}
	
	public String getData() {
		return data;
	}
	
	@Override
	public boolean equals(Object obj) {
		if(this == obj) return true;
		if(obj == null || this.getClass() != obj.getClass()) return false;
		Prenotazione other = (Prenotazione) obj;
		return aula.equals(other.aula) && data.equals(other.data);
	}

}
