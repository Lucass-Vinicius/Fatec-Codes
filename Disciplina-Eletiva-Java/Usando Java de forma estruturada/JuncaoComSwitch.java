import javax.swing.JOptionPane;

public class JuncaoComSwitch {
    public static void main(String[] args) {
        String aux = JOptionPane.showInputDialog("Seja bem vindo! [A] Calculadora - [B] Fator de desconto - [C] Média do aluno - [D] Sair. Digite sua escolha: ");
        char op = aux.charAt(0);
        switch (op) {
            case 'A':
                aux = JOptionPane.showInputDialog("Digite o primeiro valor: ");
                float num1 = Float.parseFloat(aux);
                aux = JOptionPane.showInputDialog("Digite a operação desejada: ");
                op = aux.charAt(0);
                aux = JOptionPane.showInputDialog("Digite o segundo valor: ");
                float num2 = Float.parseFloat(aux);
                float res;
                if (op == '+') {
                    res = num1 + num2;
                    JOptionPane.showMessageDialog(null, "Resultado: " + num1 + " " + op + " " + num2 + "  = " + res);
                } else if (op == '-') {
                    res = num1 - num2;
                    JOptionPane.showMessageDialog(null, "Resultado: " + num1 + " " + op + " " + num2 + "  = " + res);
                } else if (op != '*' && op != '.') {
                    if (op == '/') {
                        res = num1 / num2;
                        JOptionPane.showMessageDialog(null, "Resultado: " + num1 + " " + op + " " + num2 + "  = " + res);
                    }
                } else {
                    res = num1 * num2;
                    JOptionPane.showMessageDialog(null, "Resultado: " + num1 + " " + op + " " + num2 + "  = " + res);
                }
                break;
            case 'B':
                aux = JOptionPane.showInputDialog("Digite a nota da P1: ");
                float p1 = Float.parseFloat(aux);
                aux = JOptionPane.showInputDialog("Digite  a nota do T1 ");
                float t1 = Float.parseFloat(aux);
                aux = JOptionPane.showInputDialog("Digite  a nota da P2");
                float p2 = Float.parseFloat(aux);
                aux = JOptionPane.showInputDialog("Digite  a nota do T2");
                float t2 = Float.parseFloat(aux);

                float nb1 = p1 * 70.0F / 100.0F + t1 * 30.0F / 100.0F;
                float nb2 = p2 * 70.0F / 100.0F + t2 * 30.0F / 100.0F;
                float media = (nb1 + nb2) / 2.0F;

                if (media < 2.0F) {
                    JOptionPane.showMessageDialog(null, "Reprovado!");
                } else if (media >= 6.0F) {
                    JOptionPane.showMessageDialog(null, "Aprovado!");
                    return;
                } else {
                    JOptionPane.showMessageDialog(null, "Recuperação!");
                }

                aux = JOptionPane.showInputDialog("Digite  a nota da PR: ");
                float pr = Float.parseFloat(aux);
                float mf = (media + pr) / 2.0F;
                if (mf < 6.0F) {
                } else {
                    JOptionPane.showMessageDialog(null, "Reprovado!");
                    JOptionPane.showMessageDialog(null, "Aprovado!");
                }
                break;
            case 'C':
                aux = JOptionPane.showInputDialog("Digite o valor: ");
                float valor = Float.parseFloat(aux);
                JOptionPane.showMessageDialog(null, "Selecione o desconto: A - 5% | B - 8% | C 15% | D - 40%");
                aux = JOptionPane.showInputDialog("Escolhe uma das opções de desconto: ");
                op = aux.charAt(0);
                if (op == 'A') {
                    valor -= valor * 5.0F / 100.0F;
                } else if (op == 'B') {
                    valor -= valor * 8.0F / 100.0F;
                } else if (op == 'C') {
                    valor -= valor * 15.0F / 100.0F;
                } else if (op == 'D') {
                    valor -= valor * 40.0F / 100.0F;
                }
                JOptionPane.showMessageDialog(null, "Valor com o desconto: " + valor);
                break;
            case 'D':
                JOptionPane.showMessageDialog(null, "Ecenrrando...");
                break;
            default:
                JOptionPane.showMessageDialog(null, "Opção incorreta! Encerrando...");
        }


    }
}
