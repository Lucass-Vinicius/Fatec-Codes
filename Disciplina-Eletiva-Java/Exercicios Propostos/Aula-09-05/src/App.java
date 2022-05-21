public class App {
    public static void main(String[] args) throws Exception {
        
        Quadrado q = new Quadrado(2);
        
        /*System.out.println("Lado: " + q.lado);
        System.out.println("Area: " + q.area);
        System.out.println("Perimetro: " + q.perimetro);*/
        
        q.alteraLado(3);
        
        System.out.println("Lado: " + q.retornaLado());
        System.out.println("Area: " + q.retornaArea());
        System.out.println("Perimetro: " + q.retornaPerimetro());
    }
}
