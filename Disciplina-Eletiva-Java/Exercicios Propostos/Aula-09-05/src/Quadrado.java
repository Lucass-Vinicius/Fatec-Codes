public class Quadrado {
    private double lado;
    private double area;
    private double perimetro;

    Quadrado(double lado) {
        this.lado = lado;
        calculaArea();
        calculaPerimetro();

    }

    private void calculaArea(){
        area = lado * lado;
    }

    private void calculaPerimetro(){
       perimetro =  4 * lado; 
    }

    double retornaLado(){
        return lado;
    }

    double retornaArea(){
        return area;
    }

    double retornaPerimetro(){
        return perimetro;
    }

    void alteraLado(double lado){
        this.lado = lado;
        calculaArea();
        calculaPerimetro();
    } 
}
