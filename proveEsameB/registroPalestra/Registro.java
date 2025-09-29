package utente;

import java.util.ArrayList;
import java.util.List;

public class Registro {
	List<Iscrizione> iscrizioni;
	
	public Registro() {
		this.iscrizioni = new ArrayList<>();
	}
	
	public void add(Iscrizione nuova) {
		for(Iscrizione i : iscrizioni) {
			if(i.overlapsWith(nuova) && i.equalsUtente(nuova)) {
				throw new IscrizioneNonValidaException("Esiste già un'iscrizione uguale! ");
			}
		}
		iscrizioni.add(nuova);
	}
	
	public Registro project(int anno) {
		Registro nuovoRegistro = new Registro();
		
		for(Iscrizione i : iscrizioni) {
			if(i.contieneAnno(anno)) {
				nuovoRegistro.add(i);
			}
		}
		return nuovoRegistro;
	}
}
