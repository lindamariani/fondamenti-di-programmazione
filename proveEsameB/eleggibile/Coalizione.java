package eleggibile;

import java.util.Arrays;
import java.util.Iterator;

public class Coalizione extends eleggibile implements Iterable<Partito> {
	private Partito[] partiti;
	
	public Coalizione(String nome, Partito[] partiti) {
		super(nome, Arrays.stream(partiti).mapToInt(Partito::getVoti).sum());
		this.partiti = Arrays.copyOf(partiti, partiti.length);
	}
	
	@Override
	public int getVoti() { 
		return Arrays.stream(partiti).mapToInt(Partito::getVoti).sum();
	}
	
	@Override
    public boolean equals(Object obj) {
        if (!(obj instanceof Coalizione)) return false;
        Coalizione other = (Coalizione) obj;
        if (!getNome().equals(other.getNome())) return false;
        if (partiti.length != other.partiti.length) return false;
        for (Partito p : partiti) {
            boolean found = Arrays.stream(other.partiti).anyMatch(p::equals);
            if (!found) return false;
        }
        return true;
    }

    @Override
    public Iterator<Partito> iterator() {
        return Arrays.asList(partiti).iterator();
    }
}
