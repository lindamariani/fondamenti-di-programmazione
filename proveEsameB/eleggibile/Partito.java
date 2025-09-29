package eleggibile;

public class Partito extends eleggibile {
	public Partito(String nome) {
		super(nome, 0); //inizializza con 0 voti
	}
	
	public void vota() {
		setVoti(getVoti() + 1);
	}
	
	@Override
	public boolean equals(Object obj) {
		if(!(obj instanceof Partito)) return false;
		return super.equals(obj);
	}
}
