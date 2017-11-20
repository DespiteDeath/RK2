#include <iostream>
using namespace std;

void merge(size_t k, size_t m)
{
    int *a = new int[k];   // Динамически выделяем память под cохранение массивов размера k и m
    int *b = new int[m];

    for (int i = 0; i < k; i++) { cin >> a[i]; }
    for (int i = 0; i < m; i++) { cin >> b[i]; }

    int *result = new int[k + m];   // Динамически выделяем память

    int i = 0, j = 0;   // два индекса, указывающих на первый необработанный элемент первого и второго массивов
    int index = 0;  //  индекс массива-результата, который указывает позицию, которая будет заполнена на текущем шаге

    while (i < k && j < m) {
        if (a[i] < b[j]) { result[index] = a[i]; i++; }
        else { result[index] = b[j];j++; }
        index++;
    }

    while (i < k) { result[index] = a[i]; index++; i++; }
    while (j < m) { result[index] = b[j]; index++; j++; }

    for (int l = 0; l < k + m; l++)
        { cout << result[l] << ' '; }
}

int main()
{
    cout<<"Enter k and m size: ";
    size_t n, m;
    cin >> n;
    cin >> m;

    merge(n,m);
    return 0;
}


