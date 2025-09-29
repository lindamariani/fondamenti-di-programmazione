package eleggibile;

import java.util.List;
import java.util.ArrayList;

public class Elezione {
	List<Coalizione> coalizioni;

    public Elezione() {
        coalizioni = new ArrayList<>();
    }

    public void add(Coalizione c) {
        if (coalizioni.contains(c)) {
            throw new RuntimeException("Coalizione già iscritta!");
        }
        coalizioni.add(c);
    }

    public Coalizione winner() {
        if (coalizioni.isEmpty()) return null;
        Coalizione vincitore = coalizioni.get(0);
        for (Coalizione c : coalizioni) {
            if (c.getVoti() > vincitore.getVoti()) {
                vincitore = c;
            }
        }
        return vincitore;
    }
    
    public void mostraCoalizioni() {
    	for(Coalizione c : coalizioni) {
    		System.out.println(c.getNome() + " -> " + c.getVoti() + " voti");
    	}
    }
}
