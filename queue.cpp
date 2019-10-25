#include <iostream>
#include <queue> // подключили библиотеку queue


using namespace std;

const int godnow = 2018;

struct kvart{
	char name[100];
	char family[100];
	char kol_vo[100];
};


int main() {
	int i, n, k, j, iz, p, an, number, siz, r;
	int mass[6];

	kvart kv[100];

	queue <kvart> q;

	cout << "do kakogo goda?" << endl;
	cin >> n;

	for (int i = godnow; i <= n; i++) {

		for (int m = 1; m <= 5; m++)
			mass[m] = rand() % 15 + 1;
		
		cout << "kakoe kolichestvo ludei dobavilos v etom godu?" << endl;
		cin >> k;

		for (j = 0; j < k; j++){

			cout << "name?" << endl;
			cin >> kv[j].name;

			cout << "family?" << endl;
			cin >> kv[j].family;

			cout << "kolichestvo komnat?" << endl;
			cin >> kv[j].kol_vo;

			q.push(kv[j]);

		}

		siz = q.size();

		for (r = 0; r < siz; r++){
			cout << q.front().name << endl;
			cout << q.front().family << endl;
			cout << q.front().kol_vo << endl;

			cout << "plus skolyko komnat?" << endl;

			cin >> an;

			cout << "kolychestvo komnat v nalichii" << endl;
			cout << "odna kom " << mass[1] << endl;
			cout << "dve kom " << mass[2] << endl;
			cout << "tri kom " << mass[3] << endl;
			cout << "chetyre kom " << mass[4] << endl;
			cout << "pyat kom " << mass[5] << endl;
			cout << endl;

			number = atoi(q.front().kol_vo) + an;

			if (mass[number] != 0){
				mass[number]--;
				q.pop();
			}
			else{
				kv[0] = q.front();
				q.pop();
				q.push(kv[0]);
			}

			cout << "kolychestvo komnat v nalichii" << endl;
			cout << "odna kom " << mass[1] << endl;
			cout << "dve kom " << mass[2] << endl;
			cout << "tri kom " << mass[3] << endl;
			cout << "chetyre kom " << mass[4] << endl;
			cout << "pyat kom " << mass[5] << endl;
			cout << endl;
		}
	}

	
	while (!q.empty())
		q.pop();

}