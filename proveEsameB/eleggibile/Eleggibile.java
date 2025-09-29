package eleggibile;

public class eleggibile {
	private String nome;
    private int voti;

    public eleggibile(String nome, int voti) {
        this.nome = nome;
        this.voti = voti;
    }

    public String getNome() {
        return nome;
    }

    public int getVoti() {
        return voti;
    }

    protected void setVoti(int voti) {
        this.voti = voti;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) return true;
        if (obj == null || getClass() != obj.getClass()) return false;
        eleggibile other = (eleggibile) obj;
        return voti == other.voti && nome.equals(other.nome);
    }
}
