package AlbumFigurine;

/*Nel contesto dello sviluppo di un sistema di gestione per album di figurine virtuali, si
implementino le seguenti classi.
▶ Si implementi una classe astratta Figurina. La classe `e da caratterizzata un numero identificativo positivo e
deve mettere a disposizione un costruttore che inizializza il campo corrispondente. Si implementi il metodo getter
per l’attributo della classe. La classe deve sovrascrivere il metodo equals della classe Object; due figurine sono
uguali per il metodo equals se hanno lo stesso numero identificativo. La classe deve implementare l’interfaccia
Comparable<Figurina>; il metodo compareTo deve confrontare le figurine in base al numero identificativo.
Le classi concrete che estendono la classe Figurina sono FigurinaSportiva, FigurinaStorica e FigurinaCartoons
(da non implementare).*/

public abstract class Figurina implements Comparable<Figurina> {
	int numeroId;
	
	public Figurina(int numeroId) {
		if(numeroId <= 0)
			throw new IllegalArgumentException("Numero negativo! ");
		this.numeroId = numeroId;
	}
	
	public int getNumeroId() {
		return numeroId;
	}
	
	public abstract String tipo();
	
	@Override
	public boolean equals(Object obj) {
		if(this == obj) return true;
		if(obj == null || this.getClass() != obj.getClass()) return false;
		Figurina other = (Figurina) obj;
		return this.numeroId == other.numeroId;
	}
	
	@Override
	public int compareTo(Figurina other) {
		if(this.numeroId > other.numeroId) return 1;
		else if (this.numeroId > other.numeroId) return -1;
		else return 0;
	}
}
