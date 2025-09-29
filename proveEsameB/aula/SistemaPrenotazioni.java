package aula;

import java.util.HashSet;
import java.util.Set;
import java.util.Iterator;

class SistemaPrenotazioni implements Iterable<Prenotazione> {
	private Set<Prenotazione> prenotazioni;
	
	public SistemaPrenotazioni() {
		this.prenotazioni = new HashSet<>();
	}
	
	public void aggiungiPrenotazione(Prenotazione p) {
		if(prenotazioni.contains(p)) {
			throw new AulaOccupataException("Aula già occupata! " + p.getData());
		}
		prenotazioni.add(p);
	}
	
	public Set<AulaStandard> getAuleStandardPrenotateOn(String data) {
		Set<AulaStandard> result = new HashSet<>();
		for(Prenotazione p : prenotazioni) {
			if(p.getData().equals(data) && p.getAula() instanceof AulaStandard) {
				result.add((AulaStandard) p.getAula());
			}
		}
		return result;
	}
	
	@Override
	public Iterator<Prenotazione> iterator() {
		return prenotazioni.iterator();
	}
	
}
