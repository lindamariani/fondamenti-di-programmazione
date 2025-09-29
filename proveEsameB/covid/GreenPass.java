package covid;

public class GreenPass {
	String cf;
	String data;
	
	public GreenPass(String cf, String data) {
		this.cf = cf;
		this.data = data;
	}
	
	public String getCf() {
		return cf;
	}
	
	public String getData() {
		return data;
	}
	
	@Override
	public String toString() {
		return "codice fiscale: " + cf + " | data di scadenza: " + data;
	}
	
	@Override
	public boolean equals(Object obj) {
		if(this == obj) return true;
		if(obj == null || this.getClass() != obj.getClass()) return false;
		GreenPass other = (GreenPass) obj;
		return this.cf.equals(other.cf) && this.data.equals(other.data);
	} 
}
