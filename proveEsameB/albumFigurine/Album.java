package AlbumFigurine;

/*
 Si implementi una classe Album caratterizzata dal nome dell’album e dall’insieme di figurine che fanno parte
dell’album. Si implementi un costruttore che prende come parametro il nome dell’album e inizializza il campo
corrispondente; quando costruito un album non ha alcuna figurina.
Si implementi un metodo add che aggiunge una figurina all’album. Un album non pu`o avere pi`u di 100 figurine
sportive e pi`u di 50 figurine storiche e non pu`o avere due figurine con lo stesso numero identificativo. Se una di
queste condizioni non `e rispettata, il metodo add deve lanciare un’eccezione non controllata.
La classe deve sovrascrivere il metodo equals della classe Object. Due album sono uguali per il metodo equals se
hanno lo stesso nome e le stesse figurine.
*/

import java.util.Set;
import java.util.HashSet;

public class Album {
	private String nomeAlbum;
	private Set<Figurina> figurine;
	
	public Album(String nomeAlbum) {
		this.nomeAlbum = nomeAlbum;
		figurine = new HashSet<>();
	}
	
	public String getNomeAlbum() {
		return nomeAlbum;
	}
	
	public Set<Figurina> getFigurine() {
		return figurine;
	}
	
	public void add(Figurina f) {
		if(f == null) {
			throw new RuntimeException("Figurina null! ");
		}
		
		for(Figurina fig : figurine) {
			if(fig.compareTo(f) == 0) {
				throw new RuntimeException("Figurina gia' presente! ");
			}
		}
		
		int sportive = 0;
		int storiche = 0;
		for(Figurina fig : figurine) {
			if(fig.tipo().equals("Storica")) {
				storiche++;
			} else if(fig.tipo().equals("Sportiva")) {
				sportive++;
			}
		}
		
		if(f.tipo().equals("Storica") && storiche >= 50) {
			throw new RuntimeException("Posto per figurine storiche esaurito! ");
		} else if (f.tipo().equals("Sportiva") && sportive >= 100) {
			throw new RuntimeException("Posto per figurine sportive esaurito! ");
		} 
		
		figurine.add(f);
	}
	
	@Override
	public boolean equals(Object obj) {
		if(this == obj) return true;
		if(obj == null || this.getClass() != obj.getClass()) return false;
		Album other = (Album) obj;
		return this.nomeAlbum.equals(other.nomeAlbum) && this.figurine.equals(other.figurine);
	}
}
