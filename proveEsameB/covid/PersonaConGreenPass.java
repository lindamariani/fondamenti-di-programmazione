package covid;

import java.util.ArrayList;
import java.util.List;

public class PersonaConGreenPass implements Comparable<PersonaConGreenPass> {
	String cf;
	List<GreenPass> greenPassList;
	
	public PersonaConGreenPass(String cf) {
		this.cf = cf;
		this.greenPassList = new ArrayList<>();
	}
	
	public String getCf() {
		return cf;
	}
	
	public void addGreenPass(GreenPass gp) {
		if(!gp.getCf().equals(cf)) {
			throw new GreenPassException("GreenPass non corrisponde al codice fiscale");
		}
		if(gp instanceof GreenPassVaccino) {
			for(GreenPass g : greenPassList) {
				if(g instanceof GreenPassVaccino) {
					throw new GreenPassException("La persona ha gia' un GreenPass Vaccino");
				}
			}
		}
		greenPassList.add(gp);
	}
	
	public List<GreenPass> getGreenPassList() {
		return new ArrayList<>(greenPassList);
	}
	
	@Override
    public String toString() {
        StringBuilder sb = new StringBuilder("Persona [CF=" + cf + "]\n");
        for (GreenPass g : greenPassList) {
            sb.append("  ").append(g).append("\n");
        }
        return sb.toString();
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        PersonaConGreenPass other = (PersonaConGreenPass) o;
        return cf.equals(other.cf) &&
               greenPassList.equals(other.greenPassList);
    }

    @Override
    public int compareTo(PersonaConGreenPass other) {
        return Integer.compare(this.greenPassList.size(), other.greenPassList.size());
    }
}
