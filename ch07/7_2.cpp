#include <iostream>

const int Nscores = 10;

int fill(double *);
double get_avg(double *, int);
void output(double *, int);

int main(void)
{
    using namespace std;

    int n;
    double scores[10] = {0.0};

    // read in scores
    n = fill(scores);

    // get average
    double avg;
    avg = get_avg(scores, n);

    // output
    output(scores, n);

    cout << "averages: " << avg << endl;

    return 0;
}

int fill(double * scores)
{
    using namespace std;

    int i;
    for(i = 0; i < Nscores; ++i)
    {
        cout << "Enter score(" << i << "): ";
        double score;
        cin >> score;
        if(score <= 0.0)
            break;
        scores[i] = score;
    }

    return i + 1;
}

double get_avg(double * scores, int n)
{
    double sum;
    int i;
    double avg;

    for(i = 0, sum = 0.0; i < n; ++i)
        sum += scores[i];

    avg = sum/(double)n;

    return avg;
}

void output(double * scores, int n)
{
    int i;
    for(i = 0; i < n; ++i)
        std::cout << scores[i] << " ";
    std::cout << std::endl;
}
