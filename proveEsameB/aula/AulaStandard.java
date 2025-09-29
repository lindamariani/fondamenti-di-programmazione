package aula;

public class AulaStandard extends Aula {
	int numeroLavagne;
	
	AulaStandard(String nome, int MaxCapacity, int numeroLavagne) {
		super(nome, MaxCapacity);
		this.numeroLavagne = numeroLavagne;
	}
	
	public int getNumeroLavagne() {
		return numeroLavagne;
	}
	
	@Override
	public boolean equals(Object obj) {
		if(!super.equals(obj)) return false;
		if(this.getClass() != obj.getClass()) return false;
		AulaStandard other = (AulaStandard) obj;
		return numeroLavagne == other.numeroLavagne;
	}
}
