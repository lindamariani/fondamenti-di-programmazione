package utente;

public class Utente {
		String nome;
		String cognome;
		
		public Utente(String nome, String cognome) {
			this.nome = nome;
			this.cognome = cognome;
		}
		
		public String getNome() {
			return nome;
		}
		
		public String getCognome() {
			return cognome;
		}
		
		@Override
		public boolean equals(Object obj) {
			if(this == obj) return true;
			if(obj == null || this.getClass() != obj.getClass()) return false;
			Utente other = (Utente) obj;
			return this.nome.equals(other.nome) && this.cognome.equals(other.cognome);
		}
		
		@Override
		public String toString() {
			return nome + " " + cognome;
		}
}
