package utente;

public class Iscrizione {
	Utente utente;
	int meseInizio;
	int annoInizio;
	int meseFine;
	int annoFine;
	
	public Iscrizione(Utente utente, int meseInizio, int meseFine, int annoInizio, int annoFine) {
		this.utente = utente;
		this.meseInizio = meseInizio;
		this.annoInizio = annoInizio;
		this.meseFine = meseFine;
		this.annoFine = annoFine;
		
		if(!isValida()) {
			throw new IscrizioneNonValidaException("Iscrizione non valida! ");
		}
	}
	
	private boolean isValida() {
		//converto anno+mese in mesi totali
		int start = annoInizio * 12 + (meseInizio - 1);
		int end = annoFine * 12 + (meseFine - 1);
		
		if(start > end) return false;
		if((end - start + 1) > 12) return false;
		
		return true;
	}
	
	public boolean overlapsWith(Iscrizione other) {
		int startThis = annoInizio * 12 + (meseInizio - 1);
		int endThis = annoFine * 12 + (meseFine - 1);
		
		int startOther = other.annoInizio * 12 + (other.meseInizio - 1);
		int endOther = other.annoFine * 12 + (other.meseFine - 1);
		
		return (startThis <= endOther && startOther <= endThis);
	}
	
	public boolean equalsUtente(Iscrizione other) {
		return this.utente.equals(other);
	}
	
	 public boolean contieneAnno(int anno) {
	        // converto start e end in mesi assoluti
	        int start = annoInizio * 12 + (meseInizio - 1);
	        int end   = annoFine   * 12 + (meseFine - 1);

	        int annoStart = anno * 12;          // gennaio di quell'anno
	        int annoEnd   = anno * 12 + 11;     // dicembre di quell'anno

	        return !(end < annoStart || start > annoEnd);
	    }
	
	@Override
	public boolean equals(Object obj) {
		if(this == obj) return true;
		if(obj == null || this.getClass() != obj.getClass()) return false;
		Iscrizione other = (Iscrizione) obj;
		return this.utente.equals(other.utente) &&
				this.meseInizio == other.meseInizio &&
				this.meseFine == other.meseFine &&
				this.annoInizio == other.annoInizio &&
				this.annoFine == other.annoFine;
	}
	
	@Override
	public String toString() {
		return "Iscrizione di " + utente +
				"da " + meseInizio + "/" + annoInizio +
				" a " + meseFine + "/" + annoFine;
	}
	
	
}
