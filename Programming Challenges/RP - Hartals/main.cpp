#include <iostream>
#include <bitset>

using namespace std;

void populate_callendar(bitset<3650> callendar, int n, int h)
{

}
int main()
{
    int t,//quantidade de casos a serem testados
        n,//número de dias máximo dos eventos
        p,//número de partidos
        h;//quantidade de dias de greve de cada partido

    cin>>t;
    for(int k=0; k<t; k++)
    {
        cin>>n;
        if(n>=7&&n<=3650)
        {
            bitset<3650> callendar;

            cin>>p;
            for(int i=0; i<p; i++)
            {
                cin>>h;
                for(int j=h; j<=n ; j+=h)
                {
                   // int mod = j%7;
                   /*encontra o resto da divisão do dia por 7,
                                    se o resto é 1: o dia da semana é sexta-feira;
                                    se o resto for 0: é sábado*/

                    if(j%7==0 || (j+1)%7==0)
                        //cout<< j<<" "<<h<<endl;
                        continue;

                    callendar.set(j-1);
                }

            }
            cout<<callendar.count()<<endl;

            //cout<<callendar;//.count();
            /*for(int i=0; i<n;i++)
                callendar.test(i);*/
        }


    }
}


