import javax.swing.JOptionPane;

public class mediaAluno {
    public static void main(String[] args) {
        String aux = JOptionPane.showInputDialog("Digite a nota da P1: ");
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
    }
}
