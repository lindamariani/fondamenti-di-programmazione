package aula;

public abstract class Aula {
	String nome;
	int MaxCapacity;
	
	Aula(String nome, int MaxCapacity) {
		this.nome = nome;
		this.MaxCapacity = MaxCapacity;
	}
	
	public String getNome() {
		return nome;
	}
	
	public int GetMaxCapacity() {
		return MaxCapacity;
	}
	
	@Override
	public boolean equals(Object obj) {
		if(this == obj) return true;
		if(obj == null || getClass() != obj.getClass()) return false;
		Aula other = (Aula) obj;
		return MaxCapacity == other.MaxCapacity && nome.equals(other.nome);
	}
}
