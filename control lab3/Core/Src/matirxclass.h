#ifndef matirxclass_H_
#define matirxclass_H_

class matrix_class
{
    public:
        int d_x=0;
        int d_y=0;
        // int matrix[50][50];
        int **data;
    
    matrix_class(int x, int y){
        d_x=x;
        d_y=y;
        data = new int* [x];
        for (int i = 0; i < x; i++)
        {
            data[i]= new int[y];
        };
        //cout << "con_xy";
    }
    matrix_class(){
        d_x=1;
        d_y=1;
        data = new int* [1];
        for (int i = 0; i < 1; i++)
        {
            data[i]= new int[1];
        };
        //cout << "con_normal";
    }
    ~matrix_class(){
        for (int i = 0; i < d_x; i++)
        {
            delete data[i];
        };
        delete [] data;
    }
    void setx(int x){
        d_x=x;
    }
    void sety(int y){
        d_y=y;
    }
    matrix_class operator*(matrix_class& m){
        matrix_class result;
        result.setx(d_y);
        result.sety(m.d_x);

        for (int y = 0; y < d_y; y++)
        {
            for (int x =0 ; x < m.d_x; x++){
                int total=0;
                // printf("out_test [%d,%d] = ",i,j);
                for(int k=0;k<d_x;k++){
                    total=total+data[k][y]*m.data[x][k];
                    // printf("%d * %d + ",matrix[k][i],m.matrix[j][k]);
                }
                result.data[x][y]=total;
                // printf(" = %d\n",total);
            }
        }
        return result;
    }
    matrix_class operator+(matrix_class& m){
        matrix_class result;
        result.setx(d_y);
        result.sety(d_x);
        
        for (int y = 0; y < d_y; y++)
        {
            for (int x =0 ; x < d_x; x++){
                int total=0;
                total=data[x][y]+m.data[x][y];

                result.data[x][y]=total;
                // printf(" = %d\n",total);
            }
        }
        return result;
    }

};
#endif
