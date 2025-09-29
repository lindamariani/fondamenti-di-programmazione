package covid;

public class GreenPassVaccino extends GreenPass {
	String tipoVaccino;
	
	public GreenPassVaccino(String cf, String data, String tipoVaccino) {
		super(cf, data);
		this.tipoVaccino = tipoVaccino;
	}
	
	public String getTipoVaccino() {
		return tipoVaccino;
	}
	
	@Override
	public boolean equals(Object obj) {
		if(!super.equals(obj)) return false;
		if(obj == null || this.getClass() != obj.getClass()) return false;
		GreenPassVaccino other = (GreenPassVaccino) obj;
		return this.tipoVaccino.equals(other.tipoVaccino);
	}
}
