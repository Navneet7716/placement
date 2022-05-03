import java.util.*;

class Cell {
	int i, j;

	public Cell(int i, int j) {
		this.i = i;
		this.j = j;
	}

	public String toString() {
		return "(" + this.i + ", " + this.j + ") ";
	}

	public boolean equals(Cell obj) {
		return (obj.i == this.i && obj.j == this.j);
	}
}

class Entry {
	Cell cell;
	int dist;

	Entry(Cell c, int d) {
		cell = c;
		dist = d;
	}

	public String toString() {
		return "[" + cell + " - " + dist + "]";
	}

}

class shortestDistance {

	
	public static int shortestDist(int[][] m, Cell source, Cell destination) {
		
		int[] di = { -1, -1, 0, 1, 1, 1, 0, -1 };
		int[] dj = { 0, 1, 1, 1, 0, -1, -1, -1 };
		int r = m.length, c = m[0].length;
		Queue<Entry> q = new LinkedList<>();
		Set<Cell> vis = new HashSet<>(); // or 2d visited array

		q.add(new Entry(source, 0));
		vis.add(source);

		while (!q.isEmpty()) {
			Entry f = q.remove();
			if (f.cell.equals(destination)) {
				return f.dist;
			}
			// for all neighbours: if not visited : q.add(new Entry(, f.dist + 1));
			// vis.add(neighbcell);

			for (int x = 0; x < 8; x++) {
				int ni = f.cell.i + di[x];
				int nj = f.cell.j + dj[x];

				if (ni >= 0 && ni < r && nj >= 0 && nj < c && m[ni][nj] == 1) {
					Cell neighbor = new Cell(ni, nj);
					if (!vis.contains(neighbor)) {
						q.add(new Entry(neighbor, f.dist + 1));
						vis.add(neighbor);
					}
				}

			}

		}
		
		return -1;

	}

	public static void main(String[] args) {

		try (Scanner sc = new Scanner(System.in)) {
			int r = sc.nextInt();
			int c = sc.nextInt();

			int[][] m = new int[r][c];

			for (int i = 0; i < r; i++) {
				for (int j = 0; j < c; j++) {
					m[i][j] = sc.nextInt();
				}
			}

			int si = sc.nextInt();
			int sj = sc.nextInt();
			int ei = sc.nextInt();
			int ej = sc.nextInt();

			Cell source = new Cell(si, sj);
			Cell destination = new Cell(ei, ej);
			System.out.print(shortestDist(m, source, destination));
		}

	}

}
