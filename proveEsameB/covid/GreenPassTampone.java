package covid;

public class GreenPassTampone extends GreenPass  {
	String tipoTampone;
	
	public GreenPassTampone(String cf, String data, String tipoTampone) {
		super(cf, data);
		this.tipoTampone = tipoTampone;
	}
	
	public String getTipoTampone() {
		return tipoTampone;
	}
	
	@Override 
	public boolean equals(Object obj) {
		if(!super.equals(obj)) return false;
		if(obj == null || this.getClass() != obj.getClass()) return false;
		GreenPassTampone other = (GreenPassTampone) obj;
		return this.tipoTampone.equals(other.tipoTampone);
	}
}
